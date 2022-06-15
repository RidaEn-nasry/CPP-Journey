/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:49:21 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 17:06:54 by ren-nasr         ###   ########.fr       */
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

Zombie* Zombie::ZombieHorde( int N, std::string name )
{
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        horde[i].name = name;
    return (horde);
}

Zombie::Zombie( std::string name ) : name( name ) {};

Zombie::Zombie( const Zombie& other ) : name( other.name ) {};

Zombie& Zombie::operator=( const Zombie& other )
{
    this->name = other.name;
    return *this;
}

Zombie::Zombie() {};
