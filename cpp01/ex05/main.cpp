/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:45:23 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 16:52:23 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main( void ) {
    Harl harl;
    harl.complain( "debug" );
    harl.complain( "info" );
    harl.complain( "warning" );
    harl.complain( "error" );
    return 0;
}