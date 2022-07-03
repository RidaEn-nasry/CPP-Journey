/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 10:49:04 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/07/03 21:39:01 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.hpp>
#include <iostream>
#define MAX_VAL 750

int main( void ) {
	std::cout << "**********************************************************" << std::endl;
	std::cout << "*			Instantiation Tests			*" << std::endl;
	std::cout << "**********************************************************" << std::endl;
	// ints
	Array< int > intArr;
	if ( intArr.size( ) == 0 ) std::cout << "array of integers is empty " << std::endl;

	// doubles
	Array< double > doubleArr;
	if ( doubleArr.size( ) == 0 ) std::cout << "array of floats is empty " << std::endl;

	// floats
	Array< float > floatArr;
	if ( floatArr.size( ) == 0 ) std::cout << "array of doubles is empty" << std::endl;

	// chars
	Array< char > charArr( 3 );
	std::cout << charArr.size( ) << std::endl;

	// strings
	Array< std::string > stringArr( 199 );
	std::cout << charArr.size( ) << std::endl;
	std::cout << "**********************************************************" << std::endl;
	std::cout << "*			Functionalities Tests		       *" << std::endl;
	std::cout << "**********************************************************" << std::endl;

	// copy constructor
	srand( time( NULL ) );
	Array< float > floats( 5 );
	for ( size_t i = 0; i < floats.size( ); i++ ) floats [ i ] = rand( ) % 50;
	Array< float > copyFloats( floats );
	std::cout << "Values of floats array: ";
	for ( size_t i = 0; i < floats.size( ); i++ ) std::cout << floats [ i ] << " ";
	std::cout << "is the same as values of it's copy: ";
	for ( size_t i = 0; i < copyFloats.size( ); i++ ) std::cout << copyFloats [ i ] << " ";
	std::cout << std::endl;
	// assignment operator
	floatArr = copyFloats;
	std::cout << "floatArr before assignement is == NULL" << std::endl;
	std::cout << "floatArr after assignment is: ";
	for ( size_t i = 0; i < copyFloats.size( ); i++ ) std::cout << floatArr [ i ] << " ";
	std::cout << std::endl;

	// out of range tests
	try {
		std::cout << floatArr [ 100 ];
	} catch ( std::exception& e ) {
		std::cout << e.what( ) << std::endl;
	}

	std::cout << "**********************************************************" << std::endl;
	std::cout << "*			Mandatory Tests			"
		     "	*"
		  << std::endl;
	std::cout << "**********************************************************" << std::endl;

	Array< int > numbers( MAX_VAL );
	int* mirror = new int [ MAX_VAL ];
	srand( time( NULL ) );
	for ( int i = 0; i < MAX_VAL; i++ ) {
		const int value = rand( );
		numbers [ i ] = value;
		mirror [ i ] = value;
	}
	// SCOPE
	{
		Array< int > tmp = numbers;
		Array< int > test( tmp );
	}

	for ( int i = 0; i < MAX_VAL; i++ ) {
		if ( mirror [ i ] != numbers [ i ] ) {
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try {
		numbers [ -2 ] = 0;
	} catch ( const std::exception& e ) {
		std::cerr << e.what( ) << '\n';
	}
	try {
		numbers [ MAX_VAL ] = 0;
	} catch ( const std::exception& e ) {
		std::cerr << e.what( ) << '\n';
	}

	for ( int i = 0; i < MAX_VAL; i++ ) {
		numbers [ i ] = rand( );
	}
	delete [] mirror;
	return 0;
}
