/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 07:11:34 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 10:36:19 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/**
 * @brief replace all occurences of str1 in file with str2
 * @note
 * @param  file: file to replace str1 in
 * @param  str: string to replace
 * @param  str2: string to replace str with
 * @retval  0 if success, 1 if error
 */

#include <sed.hpp>

int sed( const char* file, const char* str, const char* str2 )
{
    std::string line;
    std::string tmp;

    if (access( file, F_OK ) == -1)
    {
        std::cerr << "File does not exist" << std::endl;
        return (1);
    }
    if (access( file, R_OK ) == -1)
    {
        std::cerr << "Permission denied" << std::endl;
        return (1);
    }
    std::ifstream infile( file );
    std::ofstream outfile( "/tmp/tmp" );

    while (std::getline( infile, line ))
    {
        if (line.find( str ) != std::string::npos)
        {
            tmp = line.substr( 0, line.find( str ) ) + str2 + (line.substr( line.find( str ) + strlen( str ), line.length() ));
            while (tmp.find( str ) != std::string::npos)
                tmp = tmp.substr( 0, tmp.find( str ) ) + str2 + (tmp.substr( tmp.find( str ) + strlen( str ), tmp.length() ));
            outfile << tmp << std::endl;
        }
        else
            std::cout << line << std::endl;
    }
    std::ifstream infile2( "/tmp/tmp" );
    std::ofstream outfile2( file );
    while (std::getline( infile2, line ))
        outfile2 << line << std::endl;
    remove( "/tmp/tmp" );
    return (0);
}
