/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:18:07 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 17:41:19 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
# define HARL_HPP 

#include <iostream>

class   Harl {

public:
    Harl();
    ~Harl();
    Harl( const Harl& src );
    Harl& operator=( const Harl& other );
    void    complain( std::string level );
    
private:
    int     getLevel( std::string level );
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );
};



#endif