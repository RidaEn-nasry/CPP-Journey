/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:43:55 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/07/06 22:25:06 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void) : std::stack<T>() {}
	MutantStack(const MutantStack &src) : std::stack<T>(src) {}
	~MutantStack(void) {}

	MutantStack &operator=(const MutantStack &rhs)
	{
		if (this != &rhs)
			std::stack<T>::operator=(rhs);
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	iterator begin() { return (std::stack<T>::c.begin()); }
    	const_iterator begin() const { return (std::stack<T>::c.begin()); }
    	iterator end() { return (std::stack<T>::c.end()); }
    	const_iterator end() const { return (std::stack<T>::c.end()); }
};

#endif
