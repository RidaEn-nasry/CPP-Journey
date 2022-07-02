/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:29:28 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/07/02 07:09:57 by wa5ina           ###   ########.fr       */
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
		Awesome( void ) : _n(0) { return;};
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

template <typename T, typename F>
void iter(T *arr, size_t size, F f) {
	for (size_t i = 0; i < size; i++) f(arr[i]);
}

template <typename T>
void increment(T &i) {
	i += 1;
}

template <typename T>
void display(const T &t, size_t size) {
	for (size_t i = 0; i < size; i++) {
		std::cout << t[i] << " ";
	}
	std::cout << std::endl;
}

#endif
