/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 07:31:41 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 13:09:53 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

HumanA& HumanA::operator=( const HumanA& other ) {
    _name = other._name;
    _weapon = other._weapon;
    return *this;
}

void    HumanA::attack( void )
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

HumanA::HumanA( std::string name, Weapon& weapon ) : _name( name ), _weapon( weapon ) {};

HumanA::HumanA( const HumanA& other ) : _name( other._name ), _weapon( other._weapon ) {};
HumanA::~HumanA() {};
