/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 06:44:16 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/20 09:26:54 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>


Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}

Animal::Animal(Animal const& other) {
    std::cout << "Animal Copy Constructor Called" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal& rhs) {
    std::cout << "Animal Assignment Operator Called" << std::endl;
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

void    Animal::makeSound(void) const {
    std::cout << "Animal makeSound() called" << std::endl;
}
std::string Animal::getType(void) const {
    return _type;
}
