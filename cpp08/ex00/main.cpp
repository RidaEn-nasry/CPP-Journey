/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 07:45:14 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/07/06 14:55:01 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>


int main ( void ) {	
	// valid find with vector
	vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i * i);
	try {
		easyfind(v, 25);
	} catch (ValueNotFoundException &e) {
		cout << e.what() << endl;
	}
	// valid find with array
	array<int, 10> a;
	for (int i = 0; i < 10; i++)
		a[i] = i * i * i;
	try {
		easyfind(a, 343);
	} catch (ValueNotFoundException &e) {
		cout << e.what() << endl;
	}
	// invalid find with vector 
	try {
		easyfind(v, -1);
	} catch (ValueNotFoundException &e) {
		cout << e.what() << endl;
	}
	return (0);
};





