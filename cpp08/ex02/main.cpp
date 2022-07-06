/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:27:01 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/07/06 22:33:18 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <MutantStack.hpp>
#include <vector>
#include <iostream>
#include <list>
int	main( )
{
	std::cout << "Subject:" << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "Subject compare vector:" << std::endl;
	std::vector<int> vec;

	vec.push_back(5);
	vec.push_back(17);
	std::cout << *(vec.end() - 1) << std::endl;
	vec.pop_back();
	std::cout << vec.size() << std::endl;
	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(737);

	vec.push_back(0);
	std::vector<int>::iterator it_vec = vec.begin();
	std::vector<int>::iterator ite_vec = vec.end();
	++it_vec;
	--it_vec;
	while (it_vec != ite_vec)
	{
		std::cout << *it_vec << std::endl;
		++it_vec;
	}

	std::cout << "Subject compare list:" << std::endl;
	std::list<int> lst;

	lst.push_back(5);
	lst.push_back(17);
	std::cout << lst.back() << std::endl;
	lst.pop_back();
	std::cout << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);

	lst.push_back(0);
	std::list<int>::iterator it_lst = lst.begin();
	std::list<int>::iterator ite_lst = lst.end();
	++it_lst;
	--it_lst;
	while (it_lst != ite_lst)
	{
		std::cout << *it_lst << std::endl;
		++it_lst;
	}
	return 0;
}
