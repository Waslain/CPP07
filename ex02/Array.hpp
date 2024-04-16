/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:39:47 by fduzant           #+#    #+#             */
/*   Updated: 2024/04/16 18:43:43 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
class Array
{
	public:
		Array() :  _size(0), _array(NULL) {};
		Array(unsigned int n) : _size(n)
		{
			_array = new T[n];
			for (unsigned int i = 0; i < n; i++)
				_array[i] = T();
		}
		Array(const Array &array) :  _size(array._size), _array(new T[array._size])
		{
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = array._array[i];
		};
		~Array() { delete[] _array; };

		Array &operator=(const Array &src) 
		{
			if (this == &src)
				return *this;
			delete[] _array;
			_size = src._size;
			_array = new T[src._size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = src._array[i];
			return *this;
		}
		
		T &operator[](unsigned int i)
		{
			if (i >= _size)
				throw std::out_of_range("Index out of range");
			return _array[i];
		}

		unsigned int size() const { return _size; };
	private:
		unsigned int _size;
		T *_array;
};
