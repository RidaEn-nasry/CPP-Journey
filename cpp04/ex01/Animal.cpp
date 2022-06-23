/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:15:22 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/23 15:30:06 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>


Animal::Animal() {
    std::cout << "Animal default constructor called" << std::endl;
};

Animal::~Animal() {
    std::cout << "Animal default destructor called" << std::endl;
};

Animal::Animal(const Animal& other) {
    *this = other;
}

Animal& Animal::operator=(const Animal& rhs) {
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

const std::string& Animal::getType( void ) const {return this->_type; }

void    Animal::makeSound( void ) const {
    std::cout << "What about my voice ??" << std::endl;
}