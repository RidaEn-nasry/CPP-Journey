/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:29:26 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/18 12:52:06 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _fixedPointValue( 0 ) {
    std::cout << "Default constructor called" << std::endl;
};

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed( const Fixed& other ) {
    std::cout << "Copy constructor called" << std::endl;
    this->_fixedPointValue = other.getRawBits();
};

Fixed& Fixed::operator=( const Fixed& other ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_fixedPointValue = other.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

