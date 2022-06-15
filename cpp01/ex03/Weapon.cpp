/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:09:59 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 13:10:45 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

void    Weapon::setType( std::string type ) { _type = type; };

const std::string& Weapon::getType( void ) const { return _type; };

Weapon::Weapon( const Weapon& other ) : _type( other._type ) {};

Weapon& Weapon::operator=( const Weapon& other ) {
    _type = other._type;
    return *this;
}

Weapon::Weapon( std::string type ) : _type( type ) {};

Weapon::~Weapon() {};