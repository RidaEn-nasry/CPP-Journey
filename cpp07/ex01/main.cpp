/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:15:02 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/07/02 07:09:56 by wa5ina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iter.hpp>

int main() {

	int tab[]= {0,1,2,3,4};
        Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);

	/* array of 5 integers with explicit instantiation */
	int arr[] = {1, 2, 3, 4, 5};
	iter<int[5], void (*)(int&)>(arr, 5, increment<int>);
	display<int[5]>(arr, 5);

	/* array of 7 floats with implicite instantiation */
	float arr2[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6, 7.7};
	iter(arr2, 7, increment<float>);
	display(arr2, 7);

	/* invalid instantiation */
	 // iter(arr2, 7, increment); /* increment is a function template and
	// should be instantiated before passed as argument */

	/* array of 5 doubles with explicite instantiation */
	double arr3[] = {4.3, 5.4, 6.5, 7.6, 8.7};
	iter<double[5], void (*)(double&)>(arr3, 5, increment<double>);
	display<double[5]>(arr3, 5);

	/* array of 3 characters with implicite instantiation */
	char arr4[] = {'a', 'b', 'c'};
	iter(arr4, 3, increment<char>);
	display(arr4, 3);

	return (0);
}
