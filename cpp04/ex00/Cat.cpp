/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 07:05:32 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/20 09:20:28 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
    std::cout << "Cat Assignment Operator Called" << std::endl;
    Animal::operator=(rhs);
    return *this;
}

void    Cat::makeSound(void) const {
    std::cout << "Meow" << std::endl;
}

