/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:40:33 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/24 07:28:03 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog () {
    _type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog () {
    std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog ( const Dog& other ) {
    *this = other;
}

Dog& Dog::operator=( const Dog& rhs ) {
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
};

void    Dog::makeSound ( void ) const {
    std::cout << "hawf hawf ..." << std::endl;
}
