/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:11:01 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/13 17:37:03 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Zombie.hpp"

int main( void )
{
    Zombie zombie;
    Zombie* zombieHord = zombie.ZombieHorde( 10, "Zombie Horde" );
    for (int i = 0; i < 10; i++)
        zombieHord[i].announce();
    delete[] zombieHord;
    return (0);
}