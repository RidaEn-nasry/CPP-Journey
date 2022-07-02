/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:29:28 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/07/02 18:13:02 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>

/* Start of Mandatory tests */

class	Awesome {
	private:
		int	_n;
	public: 
			Awesome( void ) : _n(42) { return;};
		int get( void ) const {return this->_n;};
};

std::ostream& operator<<(std::ostream& out, Awesome const& rhs) {
	out << rhs.get();
	return out;
}

template <typename T>
void	print(T const& x) {
	std::cout << x << std::endl;
	return ;
}

/* End of Mandatory tests */

template <typename T>
void iter(T *arr, size_t size, void (*f)(const T& t)) {
	for (size_t i = 0; i < size; i++) f(arr[i]);
}

template <typename T>
void	devideRand(T& t) {
	srand(time(NULL));
	std::cout << t / (rand() % 10) << std::endl; 
}


#endif
