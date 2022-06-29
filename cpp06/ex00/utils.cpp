/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 06:46:21 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/29 18:31:23 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <conversion.hpp>



bool    is_overflow(long double num, std::string type) {
    if (type == "char")
        return num > CHAR_MAX || num < CHAR_MIN;
    if (type == "int")
        return num > INT_MAX || num < INT_MIN;
    if (type == "float")
        return num > FLT_MAX || num < FLT_MIN;
    if (type == "double")
        return num > DBL_MAX || num < DBL_MIN;
    return false;
}

void    display(double dl) {

    if (is_overflow(dl, "float"))
        throw OverFlowException();
    float  f = static_cast<float>(dl);
    if (is_overflow(f, "int"))
        throw OverFlowException();
    int    i = static_cast<int>(dl);
    if (is_overflow(i, "char"))
        throw OverFlowException();
    char   c = static_cast<char>(dl);

    if (c >= ' ' && c <= '~')
        std::cout << "char: " << c << std::endl;
    else
        std::cout << "char is not a printable character" << std::endl;

    std::cout << "int: " << i << std::endl;
    // if float doesn't contains '.dec' set precision.
    if (f - i == 0)
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    else
        std::cout << "float: " << f << "f" << std::endl;
    if (dl - i == 0)
        std::cout << "double: " << std::fixed << std::setprecision(1) << dl << std::endl;
    else
        std::cout << "double: " << dl << std::endl;

}
