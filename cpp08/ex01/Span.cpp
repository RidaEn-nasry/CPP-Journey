/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:08:18 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/07/06 20:34:20 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span( void ) : _size( 0 ){ };

Span::Span( unsigned int n ) : _size( n ) { _vector.reserve( n ); };

Span::~Span( void ){ };

Span::Span( const Span &other ) { *this = other; };

Span &Span::operator=( const Span &other ) {
	if ( this != &other ) {
		this->_size = other._size;
		this->_vector = other._vector;
	}
	return ( *this );
}

void Span::addNumber( int n ) {
	if ( this->_size == 0 )
		throw Span::SpanFullException( );
	else {
		_vector.push_back( n );
		this->_size -= 1;
	}
}

void Span::massAdd( unsigned int n ) {
	srand( time( NULL ) );
	for ( unsigned int i = 0; i < n; i++ ) 
		this->addNumber( rand( ) );
}

unsigned long Span::shortestSpan( ) {
	if ( this->_vector.size( ) == 0 ) throw Span::SpanEmptyException( );
	std::sort( _vector.begin( ), _vector.end( ) );
	int smallest = _vector [ 1 ] - _vector [ 0 ];
	for ( unsigned int i = 1; i < _vector.size( ) - 1; i++ ) {
		if ( _vector [ i + 1 ] - _vector [ i ] < smallest )
			smallest = _vector [ i + 1 ] - _vector [ i ];
	}
	return ( smallest );
}

unsigned long Span::longestSpan( ) {
	if ( this->_vector.size( ) == 0 ) throw Span::SpanEmptyException( );
	std::sort( _vector.begin( ), _vector.end( ) );
	return ( _vector [ _vector.size( ) - 1 ] - _vector [ 0 ] );
}
