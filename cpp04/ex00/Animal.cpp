/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2022/06/20 06:44:16 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/20 09:26:54 by ren-nasr         ###   ########.fr       */
=======
/*   Created: 2022/06/23 09:15:22 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/23 10:49:54 by ren-nasr         ###   ########.fr       */
>>>>>>> f5882e6 (cpp04 ex00 ex01 ex02 finished)
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
<<<<<<< HEAD


Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}

Animal::Animal(Animal const& other) {
    std::cout << "Animal Copy Constructor Called" << std::endl;
=======
// #include <WrongAnimal.hpp>


Animal::Animal() {
    std::cout << "Animal default constructor called" << std::endl;
};

Animal::~Animal() {
    std::cout << "Animal default destructor called" << std::endl;
};

Animal::Animal(const Animal& other) {
>>>>>>> f5882e6 (cpp04 ex00 ex01 ex02 finished)
    *this = other;
}

Animal& Animal::operator=(const Animal& rhs) {
<<<<<<< HEAD
    std::cout << "Animal Assignment Operator Called" << std::endl;
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

void    Animal::makeSound(void) const {
    std::cout << "Animal makeSound() called" << std::endl;
}
std::string Animal::getType(void) const {
    return _type;
}
=======
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

const std::string& Animal::getType( void ) const {return this->_type; }

void    Animal::makeSound( void ) const {
    std::cout << "What about my voice ??" << std::endl;
}
>>>>>>> f5882e6 (cpp04 ex00 ex01 ex02 finished)
