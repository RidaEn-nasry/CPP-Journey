/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:28:02 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 18:07:46 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <Weapon.hpp>
#include 

class HumanA {

private:
    std::string _name;
    Weapon& _weapon;

public:
    HumanA( std::string name, Weapon& weapon );
    void    attack();
};

#endif