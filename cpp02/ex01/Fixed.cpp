/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 22:26:02 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/18 12:51:07 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _fixedPointValue( 0 ) {
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed( const int n ) {
    this->_fixedPointValue = n << this->_fractionalBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float n ) {
    this->_fixedPointValue = roundf( n * (1 << this->_fractionalBits) );
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed( const Fixed& other ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
};

Fixed& Fixed::operator=( const Fixed& other ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_fixedPointValue = other.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    return this->_fixedPointValue;
}

float   Fixed::toFloat() const {
    return (float)this->_fixedPointValue / (1 << this->_fractionalBits);
}

int     Fixed::toInt() const {
    return this->_fixedPointValue >> this->_fractionalBits;
}

std::ostream& operator<<( std::ostream& os, const Fixed& fixed ) {
    os << fixed.toFloat();
    return os;
}
