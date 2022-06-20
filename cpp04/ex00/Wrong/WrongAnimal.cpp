/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 06:44:16 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/20 12:43:20 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal() 
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    
    std::cout << "WrongAnimal Destructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& other) {
    std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {
    std::cout << "WrongAnimal Assignment Operator Called" << std::endl;
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

void    WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal makeSound() called" << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return _type;
}
