/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_float.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 08:30:54 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/29 07:05:07 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <converters.hpp>

/**
 * @funcion: is_float(std::string str)
 * @brief  : Detect if string is float.
 * @note  Method used is simple: if string contains a '.' and it's last character is 'f', it's a float.
 * @param  str: string to detect.
 * @retval true: if string is float. false: otherwise.
 */


// static bool overflow(std::string str, int bytes) {
//     // 
// }

bool    is_float(std::string str) {
    if ((str.find('.') != std::string::npos && str.back() == 'f') 
    || str == "iinf" || str == "-iinf" || str == "nanf")
    {
        // if (overflow(str))
        return true;
    }
    return false;
}
float   to_float(std::string str) {
    
    // if (str == "iinf")
    //     return INFINITY;
    // for (int i = 0; i < str.size(); i++)
    // {
        
    // }
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if 
    // }
    (void)str;
    return 0;
    // else if (str == "-iinf")

    
}


