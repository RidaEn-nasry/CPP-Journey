/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 20:39:04 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 11:22:54 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sed.hpp>

int main( int argc, char** argv )
{
    if (argc != 4)
    {
        std::cout << "Usage: ./sed <file> <str> <str2>" << std::endl;
        return (1);
    }
    if (sed( (const char*)argv[1], (const char*)argv[2], (const char*)argv[3] ) == 1)
        return (1);
}