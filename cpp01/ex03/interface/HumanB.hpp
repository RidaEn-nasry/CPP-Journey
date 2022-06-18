/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:30:10 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 18:07:40 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <Weapon.hpp>
#include <iostream>

class   HumanB {
private:
    std::string _name;
    Weapon* _weapon;

public:
    HumanB( std::string name );
    void    attack();
    void    setWeapon( Weapon& weapon );

};

#endif
