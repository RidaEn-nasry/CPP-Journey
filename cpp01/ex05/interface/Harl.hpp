/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:22:22 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 18:01:50 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef HARL_HPP
# define HARL_HPP 

#include <iostream>

class   Harl {

public:
    Harl();
    void    complain( std::string level );

private:
    typedef struct s_harl {
        std::string name;
        void (Harl::* f)();
    } t_harl;
    t_harl _harl[4];
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );
};



#endif