/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 08:31:29 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/27 09:28:37 by ren-nasr         ###   ########.fr       */
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