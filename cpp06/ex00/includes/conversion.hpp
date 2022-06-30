/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 08:31:29 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/29 21:29:05 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <cmath>
#include <float.h>
#include <limits>
#include <iomanip>

// Detectors 
bool    is_double(std::string str);
bool    is_float(std::string str);
bool    is_int(std::string str);
bool    is_char(std::string str);


// Converters
float   to_float(std::string str);
int     to_int(std::string str);
double  to_double(std::string str);

// Utils
bool    is_overflow(long double num, std::string type);

// conversion 
void    display(double dl);

class   OverFlowException : public std::exception {
public:
    virtual const char* what() const throw() {
        return "Overflow Exception";
    }
};

#endif