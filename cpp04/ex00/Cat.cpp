/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2022/06/20 07:05:32 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/20 09:20:28 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
    std::cout << "Cat Assignment Operator Called" << std::endl;
    Animal::operator=(rhs);
    return *this;
}

void    Cat::makeSound(void) const {
    std::cout << "Meow" << std::endl;
}

=======
/*   Created: 2022/06/23 10:04:38 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/23 10:47:29 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <Cat.hpp>

Cat::Cat() {
    _type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
};

Cat::~Cat() {
    std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat(const Cat& other) {
    *this = other;
}

Cat& Cat::operator=(const Cat& rhs) {
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void    Cat::makeSound( void ) const {
    std::cout << "meow meow ..." << std::endl;
}



>>>>>>> f5882e6 (cpp04 ex00 ex01 ex02 finished)
