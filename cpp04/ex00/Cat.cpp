/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:04:38 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/24 07:27:53 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <Cat.hpp>

Cat::Cat () {
    _type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
};

Cat::~Cat () {
    std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat ( const Cat& other ) {
    *this = other;
}

Cat& Cat::operator=( const Cat& rhs ) {
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void    Cat::makeSound ( void ) const {
    std::cout << "meow meow ..." << std::endl;
}



