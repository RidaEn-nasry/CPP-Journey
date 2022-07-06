/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 07:54:58 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/07/06 14:47:54 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <array>
# include <algorithm>

using	std::cout;
using	std::endl;
using	std::find;
using	std::vector;
using	std::array;
using	std::exception;

class	ValueNotFoundException : public exception{
	public:
		virtual const char *what() const throw() {
			return ("Value not found");
		}
};

template < typename T >
typename T::iterator easyfind(T container, int value) {
	typename T::iterator it = find(container.begin(), container.end(), value);
	if (it != container.end())
		return (it);
	else
		throw ValueNotFoundException();
}

#endif
