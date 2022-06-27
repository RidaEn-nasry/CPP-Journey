/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_int.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 09:08:16 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/27 09:11:13 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <converters.hpp>

/**
 * @function: to_int(std::string str)
 * @brief : Detect if string is int.
 * @howto: if string contains only digits and it's not a double nor a float, it's an int.
 * @note  
 * @param  str: string to detect.
 * @retval true: if string is int. false: otherwise.
 */

bool    is_int(std::string str) {
    if (str.find_first_not_of("0123456789") == std::string::npos && !is_double(str) && !is_float(str))
        return true;
    return false;
}

