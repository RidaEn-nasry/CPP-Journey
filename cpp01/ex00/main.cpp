/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:07:01 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/13 15:40:12 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int main( void )
{
    // zombie instantiated with default constructor
    Zombie zombie1;
    zombie1.announce();
    // zombie instantiated with name constructor
    Zombie zombie2( "fred the zombie" );
    zombie2.announce();
    // zombie dynamically allocated with newZombie
    Zombie* zombie3 = zombie2.newZombie( "joe the zombie" );
    zombie3->announce();
    delete zombie3;
    // zombie instantiated with randomChump
    zombie2.randomChump( "dan the zombie" );
    return (0);
}
