/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 19:06:20 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/18 22:51:07 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <ScavTrap.hpp>

int main( void )
{
    ClapTrap clap( "Joe" );
    ClapTrap clap2( "Fred" );

    std::cout << "**************************************************************************" << std::endl;
    std::cout << "*                    ClapTrape's values                               *" << std::endl;
    std::cout << "**************************************************************************" << std::endl;
    clap.attack( clap2.getName() );
    clap2.attack( clap.getName() );
    clap.takeDamage( 2 );
    clap2.takeDamage( 2 );
    clap.beRepaired( 5 );
    clap2.beRepaired( 5 );
    clap.displayStats();
    clap2.displayStats();

    std::cout << "**************************************************************************" << std::endl;
    std::cout << "*                   ScavTrap's Value                               *" << std::endl;
    std::cout << "**************************************************************************" << std::endl;
    ScavTrap scav( "Eddie" );
    ScavTrap scav2( "Charlie" );
    scav.displayStats();
    scav2.displayStats();
    scav.attack( scav2.getName() );
    scav2.attack( scav.getName() );
    scav.takeDamage( 2 );
    scav2.takeDamage( 3 );
    scav.beRepaired( 5 );
    scav.displayStats();
    scav2.displayStats();
    scav.guardGate();
    scav2.guardGate();
    return (0);
}