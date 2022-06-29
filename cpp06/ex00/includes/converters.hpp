/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 08:31:29 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/29 06:59:08 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// Detectors 
bool    is_double(std::string str);
bool    is_float(std::string str);
bool    is_int(std::string str);
bool    is_char(std::string str);


// Converters
float   to_float(std::string str);
int     to_int(char* str);

// Utils
int    how_many_digits(char *str, int i);
