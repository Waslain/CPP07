/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:41:42 by fduzant           #+#    #+#             */
/*   Updated: 2024/04/12 17:50:34 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"

void	power(const int & x){

	std::cout << x << " to square = " << (x * x) << std::endl;
}


// This function takes an element of type T and prints it to the standard output stream.
// The element can be of any type that supports the insertion operator (<<).
template<typename T>
void printArray(const T & element){
	std::cout << element << "; ";
}

// Print the given string and append "-Modified" to it.
void append(const std::string & str) {
	std::cout << str << "-Modified" << std::endl;
}

// This is a class called Awesome.
class Awesome {
	
	public:
		
		// Default constructor that sets _n to 42.
		Awesome( void ) : _n( 42 ) { return; }
		
		// Getter function that returns the value of _n.
		int get( void ) const { return this->_n; }
	
	
	private:
		
		int _n;

};

// Overloads the insertion operator (<<) for the Awesome class.
// Prints the value of the Awesome object to the output stream.
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// Prints the given element to the standard output stream.
template< typename T >
void print( T const & x ) { 
	std::cout << x << std::endl;
	return;
}

int	main(void) {
	int array1[4] = {1, 2 ,3, 4};
	// Iterates over the array1 and prints each element using the printArray function.
	std::cout << "array1 => { "; iter(array1, 4, printArray<int>); std::cout << "}" << std::endl;
	// Iterates over the array1 and applies the power function to each element.
	iter(array1, 4, &power);

	std::cout << std::endl;

	/* ************************************************************************** */
	std::string array2[3] = {"Yo", "Salut" ,"Wesh"};
	// Iterates over the array and prints each element using the printArray function.
	std::cout << "array2 => { "; iter(array2, 3, printArray<std::string>); std::cout << "}" << std::endl;
	// Iterates over the array and applies the append function to each element.
	iter(array2, 3, append);

	std::cout << std::endl;

	/* ************************************************************************** */

	int tab[] = { 0, 1, 2, 3, 4 };
	
	Awesome tab2[5];
	
	// Iterates over the array and prints each element using the print function.
	iter( tab, 5, print );
	iter( tab2, 5, print );

	return (0);
}
