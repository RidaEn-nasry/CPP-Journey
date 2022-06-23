/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2022/06/20 07:57:14 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/20 09:20:25 by ren-nasr         ###   ########.fr       */
=======
/*   Created: 2022/06/23 09:40:33 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/23 10:19:44 by ren-nasr         ###   ########.fr       */
>>>>>>> f5882e6 (cpp04 ex00 ex01 ex02 finished)
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

<<<<<<< HEAD
Dog::Dog()
{
=======
Dog::Dog() {
>>>>>>> f5882e6 (cpp04 ex00 ex01 ex02 finished)
    _type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog() {
<<<<<<< HEAD
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
=======
    std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog(const Dog& other) {
    *this = other;
}

Dog& Dog::operator=(const Dog& rhs) {
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
};

void    Dog::makeSound( void ) const {
    std::cout << "hawf hawf ..." << std::endl;
}
>>>>>>> f5882e6 (cpp04 ex00 ex01 ex02 finished)
