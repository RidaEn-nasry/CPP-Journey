/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 18:49:57 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/18 22:04:57 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int main(void)
{
    ClapTrap clap("Joe");
    ClapTrap clap2("Fred");
    std::cout << "**************************************************************************" << std::endl;
    std::cout << "*                    ClapTrape's values                               *" << std::endl;
    std::cout << "**************************************************************************" << std::endl;
    clap.attack(clap2.getName());
    clap2.attack(clap.getName());
    clap.takeDamage(2);
    clap2.takeDamage(2);
    clap.beRepaired(5);
    clap2.beRepaired(5);
    clap.displayStats();
    clap2.displayStats();
    return (0);
}