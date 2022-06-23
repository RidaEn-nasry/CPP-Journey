/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:40:33 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/23 17:37:00 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog() {
    _type = "Dog";
    _brains = new Brain;
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog default destructor called" << std::endl;
    delete _brains;
}

Dog::Dog(const Dog& other) {
    this->_brains = new Brain();
    *this = other;
}

Dog& Dog::operator=(const Dog& rhs) {
    if (this != &rhs)
    {
        *this->_brains = *rhs._brains;   
        this->_type = rhs._type;
    }
    return *this;
};

void    Dog::makeSound( void ) const {
    std::cout << "hawf hawf ..." << std::endl;
}

const Dog* Dog::getMemAddr( void ) const {return this;}
