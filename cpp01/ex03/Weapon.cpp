/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:09:59 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 18:04:04 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

void    Weapon::setType( std::string type ) { _type = type; };

const std::string& Weapon::getType( void ) const { return _type; };


Weapon::Weapon( std::string type ) : _type( type ) {};
