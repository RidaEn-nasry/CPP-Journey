/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 08:37:22 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/07/03 21:37:18 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <cstdlib>
#include <iostream>
template < typename T >
class Array {
       private:
	T* _array;
	unsigned int _size;

       public:
	Array( void ) {
		this->_array = NULL;
		this->_size = 0;
	}
	Array( unsigned int n ) {
		try {
			this->_array = new T [ n ]( );
		} catch ( std::exception& e ) {
			std::cout << "new failed:\t" << e.what( ) << std::endl;
			exit( EXIT_FAILURE );
		}
		this->_size = n;
	}
	~Array( void ) { delete [] this->_array; }
	Array( const Array< T >& other ) { *this = other; }
	Array& operator=( const Array< T >& rhs ) {
		if ( rhs.size( ) == 0 ) {
			this->_array = NULL;
			this->_size = 0;
			return *this;
		}
		try {
			this->_array = new T [ rhs.size( ) ];
			for ( size_t i = 0; i < rhs.size( ); i++ ) this->_array [ i ] = rhs._array [ i ];
			this->_size = rhs._size;
			return *this;
		} catch ( std::exception& e ) {
			std::cout << e.what( ) << std::endl;
			exit( EXIT_FAILURE );
		}
	}
	size_t size( void ) const { return this->_size; };

	T& operator[]( unsigned int index ) {
		if ( index > ( this->_size - 1 ) )
			throw OutOfRangeException( );
		else {
			return this->_array [ index ];
		}
	}
	class OutOfRangeException : public std::exception {
		//using OutOfRangeException::what;
		virtual const char* what( ) const throw( ) { return "array subscript is out of range"; }
	};
};

#endif
