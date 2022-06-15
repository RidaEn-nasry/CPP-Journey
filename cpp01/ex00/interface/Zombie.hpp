/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:51:59 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 17:01:15 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
#include <string>

class Zombie
{
public:
    Zombie();
    ~Zombie();
    Zombie( std::string name ); 
    Zombie( const Zombie& other );
    Zombie& operator=( const Zombie& );
    void announce( void );
    Zombie* newZombie( std::string name );
    void randomChump( std::string name );

private:
    std::string name;
};

#endif