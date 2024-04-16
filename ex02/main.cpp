/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:39:53 by fduzant           #+#    #+#             */
/*   Updated: 2024/04/16 18:44:24 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#include <ctime>
#include <cstdlib>
#define MAX_VAL 5

int main(int, char**) {
	
	Array<int> numbers(MAX_VAL);
	
	int* mirror = new int[MAX_VAL];
	
	srand(time(NULL));
	
	for (int i = 0; i < MAX_VAL; i++) {
		
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	for (int i = 0; i < MAX_VAL; i++) {
		
		std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
		std::cout << "mirror[" << i << "]  = " << mirror[i] << std::endl;
		std::cout << std::endl;
	}
	
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++) {

		if (mirror[i] != numbers[i]) {
			
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	
	try {
		
		numbers[-2] = 0;
	} catch(const std::exception& e) {
		
		std::cerr << e.what() << '\n';
	}
	
	try {
		
		numbers[MAX_VAL] = 0;
	} catch(const std::exception& e) {
		
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++){
		
		numbers[i] = rand();
	}
	
	delete [] mirror;//

	Array<int> empty(0);
	
	try {
		
		empty[0] = 0;
	} catch(const std::exception & e) {
		
		std::cerr << "empty: " << e.what() << '\n';
	}

	

	return 0;
}

// int main()
// {
// 	// Create an array of integers
// 	Array<int> intArray(5);

// 	// Set values in the array
// 	for (unsigned int i = 0; i < intArray.size(); i++)
// 	{
// 		intArray[i] = i + 1;
// 	}

// 	// Print the values in the array
// 	std::cout << "Integer Array: ";
// 	for (unsigned int i = 0; i < intArray.size(); i++)
// 	{
// 		std::cout << intArray[i] << " ";
// 	}
// 	std::cout << std::endl;

// 	// Create an array of strings
// 	Array<std::string> stringArray(3);

// 	// Set values in the array
// 	stringArray[0] = "Hello";
// 	stringArray[1] = "World";
// 	stringArray[2] = "!";

// 	// Print the values in the array
// 	std::cout << "String Array: ";
// 	for (unsigned int i = 0; i < stringArray.size(); i++)
// 	{
// 		std::cout << stringArray[i] << " ";
// 	}
// 	std::cout << std::endl;

// 	return 0;
// }