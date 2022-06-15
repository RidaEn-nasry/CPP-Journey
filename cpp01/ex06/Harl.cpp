/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:17:52 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 17:48:50 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <Harl.hpp>


Harl::Harl( void ) {}

Harl::~Harl( void ) {};



void    Harl::debug( void )
{
    std::cout << "[DEBUG]" << std::endl\
        << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup\
        burger. I really do!" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "[INFO]" << std::endl\
        << "I cannot believe adding extra bacon costs more money. You didn't put\
        enough bacon in my burger!If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "[WARNING]" << std::endl\
        << "I think I deserve to have some extra bacon for free. I've been coming for\
        years whereas you started working here since last month." << std::endl;
}

void    Harl::error( void )
{
    std::cout << "[ERROR]" << std::endl\
        << "This is unacceptable!I want to speak to the manager now." << std::endl;
}

void    Harl::complain( std::string level )
{
    switch (getLevel( level ))
    {
    case 0:
        debug();
        info();
        warning();
        error();
        break;
    case 1:
        info();
        warning();
        error();
        break;
    case 2:
        warning();
        error();
        break;
    case 3:
        error();
        break;
    default:
        std::cout << "[Probably complaining about insignificant problems]" << std::endl;
        break;

    }
}

Harl& Harl::operator=( const Harl& other )
{
    if (this != &other)
    {
        *this = other;
    }
    return *this;
}

int Harl::getLevel( std::string level )
{
    if (level == "DEBUG")
        return (0);
    if (level == "INFO")
        return (1);
    if (level == "WARNING")
        return (2);
    if (level == "ERROR")
        return (3);
    return (-1);
}