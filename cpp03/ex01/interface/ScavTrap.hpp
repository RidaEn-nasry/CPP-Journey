/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 19:06:33 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/19 11:56:42 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <ClapTrap.hpp>

class   ScavTrap : public ClapTrap {

public:
    ScavTrap( void );
    ScavTrap( std::string name );
    ~ScavTrap( void );
    ScavTrap( ScavTrap const& src );
    ScavTrap& operator=( const ScavTrap& rhs );

    void    guardGate( void );
};
#endif