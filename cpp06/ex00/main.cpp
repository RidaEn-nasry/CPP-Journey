/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 08:17:25 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/28 20:44:55 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/**
 * @brief  Convert a string (representing a scalar) to it's actual type.
 * @note   scalar types are primitive non-composite types. (int, float, double, etc.) 
 * @param  argc:
 * @param  **argv: 
 * @retval 
 */

#include <converters.hpp>

int main(int argc, char **argv) {
    // detect the type of the scalar 
    // and convert it to it's actual type
    // and print it out
    // if the scalar is not a scalar, print an error message
    if (argc != 2) {
        std::cout << "Usage: ./convert <scalar>" << std::endl;
        return 1;
    };
    char    *scalar = argv[1];
    // convert the scalar to it's actual type using static_cast
    // std::string scalar = argv[1];
    // detect the type of the scalar
    if (is_float(scalar))
    {
        // std::cout << "Scalar is a float" << std::endl;
        // convert using static_cast
        // float f = static_cast<float>(scalar);
        // std::cout << "Float value: " << f << std::endl;
        float f = to_float(scalar);
        std::cout << "Float value as int: " << static_cast<int>(f) << std::endl;
        // float f = to_float(scalar);
        // std::cout << "Float value: " << f << std::endl;
    }
    else if (is_double(scalar)){
        double d = static_cast<double>(scalar);
        std::cout << "Double value: " << d << std::endl;
        std::cout << "Scalar is a double" << std::endl;
        
    }
    else if (is_int(scalar)) {
        int i = static_cast<int>(scalar);
        std::cout << "Int value: " << i << std::endl;
        std::cout << "Scalar is an int" << std::endl;
    }
    else if (is_char(scalar))
    {
       char c static_cast<char>(scalar);
       std::cout << "Char value: " << c << std::endl;

    }
    return 0;

};