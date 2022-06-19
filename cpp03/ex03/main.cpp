/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 22:37:10 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/19 20:46:42 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <ScavTrap.hpp>
#include <FragTrap.hpp>
#include <DiamondTrap.hpp>

int main( void )
{

    std::cout << "**************************************************************************" << std::endl;
    std::cout << "*                    ClapTrape's values                               *" << std::endl;
    std::cout << "**************************************************************************" << std::endl;
    ClapTrap clap( "Joe" );
    ClapTrap clap2( "Fred" );
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

    std::cout << "**************************************************************************" << std::endl;
    std::cout << "*                   FragTrap's Value                               *" << std::endl;
    std::cout << "**************************************************************************" << std::endl;
    FragTrap frag( "Ricky" );
    FragTrap frag2( "Bobby" );
    frag.displayStats();
    frag2.displayStats();
    frag.attack( frag2.getName() );
    frag2.attack( frag.getName() );
    frag.takeDamage( 11 );
    frag2.takeDamage( 12 );
    frag.beRepaired( 9 );
    frag.displayStats();
    frag2.displayStats();
    frag.highFivesGuys();
    frag2.highFivesGuys();

    std::cout << "**************************************************************************" << std::endl;
    std::cout << "*                   DiamondTrap's Value                               *" << std::endl;
    std::cout << "**************************************************************************" << std::endl;

    DiamondTrap diamond( "David" );
    DiamondTrap diamond2( "John" );
    diamond.displayStats();
    diamond2.displayStats();
    diamond.attack( diamond2.getName() );
    diamond2.attack( diamond.getName() );
    diamond.takeDamage( 14 );
    diamond2.takeDamage( 15 );
    diamond.beRepaired( 10 );
    diamond.displayStats();
    diamond2.displayStats();
    diamond.guardGate();
    diamond2.guardGate();
    diamond.highFivesGuys();
    diamond2.highFivesGuys();
    diamond.whoAmI();
    diamond2.whoAmI();

    return (0);
}