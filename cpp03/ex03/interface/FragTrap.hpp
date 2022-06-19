/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 22:38:33 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/19 20:35:48 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <ClapTrap.hpp>

class   FragTrap : virtual public ClapTrap {
public:
    FragTrap( void );
    FragTrap( std::string name );
    FragTrap( int dummy );
    ~FragTrap();
    FragTrap( const FragTrap& other );
    FragTrap& operator=( const FragTrap& rhs );
    void    highFivesGuys( void );
    std::string    getName( void ) const;
};

#endif