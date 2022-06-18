/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 22:37:06 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/18 22:56:52 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <ClapTrap.hpp>

ClapTrap::ClapTrap( void ) : _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ) {
    std::cout << "ClapTrap constructor called" << std::endl;
};

ClapTrap::ClapTrap( std::string name ) : _name( name ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ) {
    std::cout << "ClapTrap constructor called" << std::endl;
};

ClapTrap::ClapTrap( const ClapTrap& other ) { *this = other; };


ClapTrap& ClapTrap::operator=( const ClapTrap& rhs ) {
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "ClapTrap destructor called" << std::endl;
};

void    ClapTrap::attack( const std::string& target )
{
    _energyPoints -= 1;
    std::cout << "ClapTrap: " << _name << " attacks " << target << " at " << _attackDamage << " damage!" << std::endl;
}

void    ClapTrap::takeDamage( unsigned int amount ) {
    if (amount > _hitPoints) {
        std::cout << "ClapTrap: " << _name << " is dead!" << std::endl;
    }
    else {
        _hitPoints -= amount;
        std::cout << "ClapTrap: " << _name << " takes " << amount << " of damage!" << std::endl;
    }
}

void    ClapTrap::beRepaired( unsigned int amount ) {
    _hitPoints += amount;
    _energyPoints -= 1;
    std::cout << "ClapTrap: " << _name << " repairs " << amount << " of damage!" << std::endl;
}

void    ClapTrap::displayStats( void ) const {
    std::cout << "ClapTrap: " << _name << " has " << _hitPoints << " hit points, " << _energyPoints << " energy points, and " << _attackDamage << " attack damage." << std::endl;
}

std::string ClapTrap::getName( void ) const {
    return this->_name;
}
