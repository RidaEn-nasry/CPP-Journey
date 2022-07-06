/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:13:52 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/07/06 20:36:43 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

int main( ) {
	// optional tests
	std::cout << "*********************       10k      "
		     "****************************"
		  << std::endl;
	Span span10k = Span( 10000 );
	span10k.massAdd( 10000 );
	std::cout << "10k vector longest span  = " << span10k.longestSpan( )
		  << std::endl;
	std::cout << "10k vector shortest span = " << span10k.shortestSpan( )
		  << std::endl;
	
	std::cout << std::endl;
	std::cout << "*********************       100k     "
		     "****************************" << std::endl;
	Span span100k( 100000 );
	span100k.massAdd( 100000 );
	std::cout << "100k vector longest span  = " << span100k.longestSpan( )
		  << std::endl;
	std::cout << "100k vector shortest span = " << span100k.shortestSpan( )
		  << std::endl;

	std::cout << std::endl;
	std::cout << "*********************       1M       "
		     "****************************"
		  << std::endl;
	Span span1M( 1000000 );
	span1M.massAdd( 1000000 );
	std::cout << "1M vector longest span  = " << span1M.longestSpan( )
		  << std::endl;
	std::cout << "1M vector shortest span = " << span1M.shortestSpan( )
		  << std::endl;
	return ( 0 );


	// mandatory tests
	Span sp = Span( 5 );
	sp.addNumber( 6 );
	sp.addNumber( 3 );
	sp.addNumber( 17 );
	sp.addNumber( 9 );
	sp.addNumber( 11 );
	std::cout << sp.shortestSpan( ) << std::endl;
	std::cout << sp.longestSpan( ) << std::endl;
	return 0;
}
