/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_char.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 09:13:08 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/29 18:19:15 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <conversion.hpp>


/**
 * @function: to_char(std::string str)
 * @howto: if string size is 1, it's a char.
 * @brief : Detect if string is char.
 * @note
 * @param  scalar: string to detect.
* @retval true
*/

bool    is_char ( std::string scalar ) {

    if (scalar.size () == 1 && scalar[0] >= 0 && scalar[0] <= 127)
        return true;
    return false;
}
