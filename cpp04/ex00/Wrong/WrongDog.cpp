/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 07:57:14 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/20 09:15:43 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongDog.hpp>

WrongDog::WrongDog()
{
    _type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

WrongDog::~WrongDog() {
    std::cout << "Dog Destructor Called" << std::endl;
}

WrongDog::WrongDog( const WrongDog& other ) : WrongAnimal( other ) {
    std::cout << "Dog Copy Constructor Called" << std::endl;
}

WrongDog& WrongDog::operator=( const WrongDog& rhs ) {
    std::cout << "Dog Assignment Operator Called" << std::endl;
    WrongAnimal::operator=( rhs );
    return *this;
}

void    WrongDog::makeSound( void ) const {
    std::cout << "Woof" << std::endl;
}
