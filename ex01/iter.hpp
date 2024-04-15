/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:18:24 by fduzant           #+#    #+#             */
/*   Updated: 2024/04/12 17:49:50 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
// Implement a function template iter that takes 3 parameters and returns nothing.
// • The first parameter is the address of an array.
// • The second one is the length of the array.
// • The third one is a function that will be called on every element of the array.
template <typename T>
void iter(T *array, size_t length, void(*f)(const T &))
{
	if (array == NULL || f == NULL)
		return ;
	for (size_t i = 0; i < length; i++)
	{
		f(array[i]);
	}
}