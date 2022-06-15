/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:18:26 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 17:48:40 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main( int argc, char** argv ) {

    if (argc != 2) {
        std::cout << "Usage: ./harlFilter <level>" << std::endl;
        return (1);
    }
    Harl harl;
    harl.complain( argv[1] );
    return 0;
}