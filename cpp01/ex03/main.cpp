/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 07:34:17 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/14 19:51:15 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>
#include <HumanB.hpp>

int main()
{
    {
        Weapon club = Weapon( "crude spiked club" );
        HumanA bob( "Bob", club );
        bob.attack();
        club.setType( "some other type of club" );
        bob.attack();
    }
    {
        Weapon club = Weapon( "crude spiked club" );
        HumanB jim( "Jim" );
        jim.setWeapon( club );
        jim.attack();
        club.setType( "some other type of club" );
        jim.attack();
    }
    return 0;
}