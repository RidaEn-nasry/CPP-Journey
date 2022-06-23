/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:04:38 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/23 17:38:39 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <Cat.hpp>


Cat::Cat() {
    _type = "Cat";
    _brains = new Brain;
    std::cout << "Cat default constructor called" << std::endl;
};

Cat::~Cat() {
    delete _brains;
    std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat(const Cat& other) {
   this->_brains = new Brain;
    *this = other;
}

Cat& Cat::operator=(const Cat& rhs) {
    
    if (this != &rhs)
    {
        this->_type = rhs._type;
        *this->_brains = *rhs._brains;
    }
    return *this;
}

void    Cat::makeSound( void ) const {
    std::cout << "meow meow ..." << std::endl;
}


const Cat* Cat::getMemAddr(void) const { return this;}
