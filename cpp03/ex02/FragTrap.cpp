/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 22:40:45 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/18 23:04:43 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap( void ) : ClapTrap() {
    std::cout << "FragTrap constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}
FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {
    std::cout << "FragTrap constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}
FragTrap::~FragTrap( void ) {
    std::cout << "FragTrap destructor called" << std::endl;
}
FragTrap::FragTrap( const FragTrap& other ) : ClapTrap( other ) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=( const FragTrap& rhs ) {
    std::cout << "FragTrap copy assignment called" << std::endl;
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

void    FragTrap::highFivesGuys( void ) {
    std::cout << "High Fives Guys! from FragTrap: " << _name << std::endl;
}

