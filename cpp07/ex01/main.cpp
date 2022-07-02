/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:15:02 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/07/02 18:11:15 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iter.hpp>


int main() {
	std::cout << "**************************************************************************" << std::endl;
	std::cout << "*                             Mandatory Tests                            *" << std::endl;
	std::cout << "**************************************************************************" << std::endl;
	int tab[]= {0,1,2,3,4};
        Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);

	std::cout << "**************************************************************************" << std::endl;
	std::cout << "*                             Optional Tests                            *" << std::endl;
	std::cout << "**************************************************************************" << std::endl;
	std::cout << "Integers: " << std::endl;
	int arr[] = {145, 234, 233, 344, 2345};
	iter(arr, 5, devideRand);

	std::cout << "Floats: " << std::endl;
	float arr2[] = {145.41f, 342.244f, 3343.343f, 414.44f, 544.54f, 1456.634f, 7232.47f};
	iter(arr2, 7, devideRand);


	std::cout << "Doubles: " << std::endl;
	double arr3[] = {4354.453, 5552.124, 44516.5434, 3437.3446, 484.47};
	iter(arr3, 5, devideRand);

	std::cout << "Characters: " << std::endl;
	char arr4[] = {'a', 'b', 'c'};
	iter(arr4, 3, devideRand);

	return (0);
}
