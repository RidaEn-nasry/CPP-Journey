/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_int.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 09:08:16 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/29 07:34:54 by ren-nasr         ###   ########.fr       */
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
    std::string tmp = str[0] == '-' || str[0] == '+' ? str.substr(1) : str;
    if (tmp.find_first_not_of("0123456789") == std::string::npos && !is_double(tmp) && !is_float(tmp))
        return true;
    return false;
}


int to_int(char *s) {
    int digits_count = how_many_digits(s, 0);
    int result = 0;
    int sign = 1;
    int i = 0;
    if (s[i] == '-' || s[i] == '+')
    {
        sign = s[i] == '-' ? -1 : 1;
        i++;
    }
        
    for (; i <= digits_count; i++) {
        result += static_cast<int>(s[i] - '0') * pow(10, digits_count - i - 1);
    }
    return (result * sign);    
}

