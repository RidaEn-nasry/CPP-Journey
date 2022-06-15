/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:28:02 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 13:09:43 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <Weapon.hpp>

class HumanA {

private:
    std::string _name;
    Weapon& _weapon;

public:
    HumanA( std::string name, Weapon& weapon );
    ~HumanA();
    HumanA( const HumanA& other );
    HumanA& operator=( const HumanA& other );
    void    attack();


};

#endif