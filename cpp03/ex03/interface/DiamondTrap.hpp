/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 23:06:23 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/19 20:47:07 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <ScavTrap.hpp>
# include <FragTrap.hpp>

class   DiamondTrap : public FragTrap, public ScavTrap {

public:
    DiamondTrap( void );
    DiamondTrap( std::string name );
    ~DiamondTrap( void );
    DiamondTrap( const DiamondTrap& other );
    DiamondTrap& operator=( const DiamondTrap& rhs );
    void    attack( std::string const& target );
    void    whoAmI( void );
    std::string  getName( void ) const;

private:
    std::string _name;
};

#endif 