/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:02:31 by fduzant           #+#    #+#             */
/*   Updated: 2024/04/12 18:05:44 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

//swap: Swaps the values of two given arguments. Does not return anything.
template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

//min: Compares the two values passed in its arguments and returns the smallest
//one. If the two of them are equal, then it returns the second one.
template <typename T>
T &min(T &a, T &b)
{
	if (a >= b)
		return b;
	else
		return a;
}

//max: Compares the two values passed in its arguments and returns the greatest one.
//If the two of them are equal, then it returns the second one
template <typename T>
T &max(T &a, T &b)
{
	if (b >= a)
		return b;
	else
		return a;
}