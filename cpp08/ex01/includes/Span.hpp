/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:58:56 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/07/06 20:33:35 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>

using std::exception;

class Span {
       private:
	std::vector< int > _vector;
	unsigned int _size;

       public:
	Span( void );
	Span( unsigned int n );
	~Span( void );
	Span( const Span &other );
	Span &operator=( const Span &other );
	void addNumber( int n );
	unsigned long  shortestSpan( void );
	unsigned long  longestSpan( void );
	void massAdd( unsigned int n );

	class SpanFullException : public exception {
		virtual const char *what( ) const throw( ) {
			return ( "Span is full" );
		};
	};
	class SpanEmptyException : public exception {
		virtual const char *what( ) const throw( ) {
			return ( "Span is empty" );
		};
	};
};

#endif
