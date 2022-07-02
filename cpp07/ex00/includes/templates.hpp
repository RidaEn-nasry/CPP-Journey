/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:54:18 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/07/02 13:47:11 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

#include <iostream>


class	Awesome {
	public:
		Awesome( void ) : _n(0) {};
		Awesome( int n) : _n(n) {};
		Awesome & operator=( const Awesome & rhs ) { _n = rhs._n; return *this; };
		bool	operator==( Awesome const & rhs ) const { return this->_n == rhs._n;};
		bool	operator!=( Awesome const & rhs ) const {return this->_n != rhs._n;};
		bool	operator>( Awesome const & rhs ) const {return this->_n > rhs._n;};
		bool	operator<( Awesome const & rhs ) const {return this->_n < rhs._n;};
		bool	operator<=( Awesome const & rhs ) const {return this->_n <= rhs._n;};
		bool	operator>=(Awesome const & rhs ) const {return this->_n >= rhs._n;};
		int	get_n() const {return _n;};
	private:
		int _n;
};

std::ostream& operator<<(std::ostream & out, const Awesome &a) {
	out << a.get_n();
	return out;
}

template <typename T>
void    swap(T& value1, T& value2) {
    T tmp = value1;
    value1 = value2;
    value2 = tmp;
}

template <typename T>
T   min(T value1, T value2) {
    return (value1 < value2) ? value1 : value2;
}

template <typename T>
T   max(T value1, T value2) {
    return (value1 > value2) ? value1 : value2;
}

#endif
