/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 07:57:14 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/20 09:20:25 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog Destructor Called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs) {
    std::cout << "Dog Assignment Operator Called" << std::endl;
    Animal::operator=(rhs);
    return *this;
}

void    Dog::makeSound(void) const {
    std::cout << "Woof" << std::endl;
}
