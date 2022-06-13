/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:51:59 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/13 15:40:36 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
#include <string>

class Zombie
{
public:
    Zombie() {};
    ~Zombie();
    Zombie( std::string name ) : name( name ) {};
    Zombie( const Zombie& other ) : name( other.name ) {};
    Zombie& operator=( const Zombie& ) { return *this; };
    void announce( void );
    Zombie* newZombie( std::string name );
    void randomChump( std::string name );

private:
    std::string name;
};

#endif