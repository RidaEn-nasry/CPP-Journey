/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:00:14 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 18:05:26 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::~Zombie()
{
    this->name.empty() ? std::cout << "Unnamed zombie died" << std::endl : \
        std::cout << "Zombie \"" << this->name << "\" died" << std::endl;
}

Zombie* Zombie::newZombie( std::string name )
{
    Zombie* zombie = new Zombie();
    zombie->name = name;
    return (zombie);
}

void Zombie::announce( void )
{
    this->name.empty() ? std::cout << "BraiiiiiiinnnzzzZ..." << std::endl : \
        std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::randomChump( std::string name )
{
    Zombie zombie;
    zombie.name = name;
    zombie.announce();
}

Zombie::Zombie( std::string name ) : name( name ) {};

Zombie::Zombie() {};
