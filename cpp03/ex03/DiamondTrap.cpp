/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:19:19 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/19 20:46:57 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <DiamondTrap.hpp>


DiamondTrap::DiamondTrap( void ) : ClapTrap()
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    _type = "DiamondTrap";
    ClapTrap::_name = _name + "_clap_name";
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" ), FragTrap( 0 ), ScavTrap( 0 )
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    this->_type = "DiamondTrap";
    this->_name = name;
}


DiamondTrap::DiamondTrap( const DiamondTrap& other ) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = other;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& rhs ) {
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
        this->_type = rhs._type;
        ClapTrap::_name = rhs._name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap( void ) {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void    DiamondTrap::attack( std::string const& target ) {
    ScavTrap::attack( target );
}

void    DiamondTrap::whoAmI( void ) {
    std::cout << _type << ": " << _name << "'s GranFather is " << ClapTrap::_name << std::endl;
}

std::string DiamondTrap::getName( void ) const {
    return this->_name;
}

