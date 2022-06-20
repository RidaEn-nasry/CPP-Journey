/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 07:05:32 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/20 09:14:29 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat()
{
    _type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Cat Destructor Called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& other ) : WrongAnimal( other )
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& rhs )
{
    std::cout << "Cat Assignment Operator Called" << std::endl;
    WrongAnimal::operator=( rhs );
    return *this;
}

void   WrongCat::makeSound(void) const {
    std::cout << "Meow" << std::endl;
}

