/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_double.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 08:59:22 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/29 18:19:13 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <conversion.hpp>

/**
 * @funcion: is_double(std::string str)
 * @brief  : Detect if string is double.
 * @howto: if str contains '.' or it's last character is 'd', it's a double.
 * @note   c++ interprets decimal point as double by default (so if it only contains '.' it's a double).
 * @param  str: string to detect.
 * @retval true: if string is double. false: otherwise.
 */

bool    is_double ( std::string str ) {
    if (str.find ( '.' ) != std::string::npos || str.back () == 'd')
        return true;
    return false;
}

double  to_double ( std::string str ) {
    if (str == "inf")
        return INFINITY;
    else if (str == "-inf")
        return -INFINITY;
    else if (str == "nan")
        return NAN;
    long double ld = std::stold ( str );
    if (is_overflow ( ld, "double" ))
        throw OverFlowException ();
    else
        return static_cast<double>(ld);;
};
