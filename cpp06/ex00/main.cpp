/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 08:17:25 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/29 18:31:11 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/**
 * @brief  Convert a string (representing a scalar) to it's actual type.
 * @note   scalar types are primitive non-composite types. (int, float, double, etc.)
 * @param  argc:
 * @param  **argv:
 * @retval
 */

#include <conversion.hpp>

int main(int argc, char** argv)
{
    if (argc != 2) {
        std::cout << "Usage: ./convert <scalar>" << std::endl;
        return 1;
    };
    char* scalar = argv[1];
    if (is_float(scalar))
    {
        try {
            float f = to_float(scalar);
            display(static_cast<double>(f));
        }
        catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    else if (is_double(scalar)) {
        try {
            double d = to_double(scalar);
            display(d);
        }
        catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    else if (is_int(scalar)) {
        try {
            int integer = to_int(scalar);
            display(static_cast<double>(integer));
        }
        catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    else if (is_char(scalar)) {
        display(static_cast<double>(scalar[0]));
    }
    else {
        std::cout << "Input is not a scalar" << std::endl;
    }
    return 0;

};