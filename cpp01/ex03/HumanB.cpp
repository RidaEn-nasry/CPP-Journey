/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 07:33:24 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 13:05:54 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

HumanB& HumanB::operator=( const HumanB& other ) {
    _name = other._name;
    _weapon = other._weapon;
    return *this;
}

void    HumanB::attack( void )
{
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void    HumanB::setWeapon( Weapon& weapon ) {
    _weapon = &weapon;
}

HumanB::HumanB( const HumanB& src ) : _name( src._name ), _weapon( src._weapon ) {};

HumanB::HumanB( std::string name ) : _name( name ) {};

HumanB::~HumanB() {};