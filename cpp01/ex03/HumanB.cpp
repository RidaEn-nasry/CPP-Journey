/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 07:33:24 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/14 19:51:18 by ren-nasr         ###   ########.fr       */
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