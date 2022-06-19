/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 22:36:52 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/19 12:01:43 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:
    ClapTrap( void );
    ClapTrap( std::string name );
    ~ClapTrap( void );
    ClapTrap( const ClapTrap& other );
    ClapTrap& operator=( const ClapTrap& rhs );
    void    displayStats( void ) const;
    void    attack( const std::string& target );
    void    takeDamage( unsigned int amount );
    void    beRepaired( unsigned int amount );
    std::string getName( void ) const;
protected:
    std::string     _name;
    std::string     _type;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;

};

#endif