/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_float.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 08:30:54 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/29 18:19:11 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <conversion.hpp>


/**
 * @funcion: is_float(std::string str)
 * @brief  : Detect if string is float.
 * @note  Method used is simple: if string contains a '.' and it's last character is 'f', it's a float.
 * @param  str: string to detect.
 * @retval true: if string is float. false: otherwise.
 */


bool    is_float ( std::string str ) {
    if ((str.find ( '.' ) != std::string::npos && str.back () == 'f')
        || str == "iinf" || str == "-iinf" || str == "nanf")
        return true;
    return false;
}

float   to_float ( std::string str ) {

    double  result = 0;
    if (str == "inff")
        return INFINITY;
    if (str == "-inff")
        return -INFINITY;
    if (str == "nanf")
        return NAN;
    result = std::stod ( str );
    if (is_overflow ( result, "float" ))
        throw OverFlowException ();
    else
        return static_cast<float>(result);
}