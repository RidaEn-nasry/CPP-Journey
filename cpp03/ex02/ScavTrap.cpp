/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 22:37:15 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/19 12:07:48 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap( void ) : ClapTrap() {
    std::cout << "ScavTrap constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _type = "ScavTrap";
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
    std::cout << "ScavTrap constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _type = "ScavTrap";
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap( other ) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& rhs ) {
    std::cout << "ScavTrap copy assignment called" << std::endl;
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
        this->_type = rhs._type;
    }
    return *this;
}

void    ScavTrap::guardGate( void ) {
    std::cout << _type <<  " : " << _name << " is guarding the gate" << std::endl;
}