/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:17:21 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 17:05:10 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>


Harl::Harl( void ) {
    _harl[0].name = "debug";
    _harl[0].f = &Harl::debug;
    _harl[1].name = "info";
    _harl[1].f = &Harl::info;
    _harl[2].name = "warning";
    _harl[2].f = &Harl::warning;
    _harl[3].name = "error";
    _harl[3].f = &Harl::error;
}

Harl::~Harl( void ) {};

void    Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup\
        burger. I really do!" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money.\
        You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free.\
        I've been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void    Harl::complain( std::string level )
{
    for (int i = 0; i < 4; i++)
    {
        if (level == _harl[i].name)
            (this->*_harl[i].f)();
    }
}

Harl& Harl::operator=(const Harl& other) 
{
    if (this != &other)
    {
        *this = other;
    }
    return *this;
}
