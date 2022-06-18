/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 22:38:33 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/18 23:04:53 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <ClapTrap.hpp>

class   FragTrap : public ClapTrap {
public:
    FragTrap( void );
    FragTrap( std::string name );
    ~FragTrap();
    FragTrap( const FragTrap& other );
    FragTrap& operator=( const FragTrap& rhs );
    void    highFivesGuys( void );

};

#endif