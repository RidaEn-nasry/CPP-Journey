/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:30:10 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 13:07:34 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <Weapon.hpp>    

class   HumanB {
private:
    std::string _name;
    Weapon* _weapon;

public:
    HumanB( std::string name );
    ~HumanB();
    HumanB( const HumanB& other ); 
    HumanB& operator=( const HumanB& other );

    void    attack();
    void    setWeapon( Weapon& weapon );

};

#endif
