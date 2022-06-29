/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 06:46:21 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/29 06:51:06 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <converters.hpp>
#include <iostream>

int how_many_digits(char *str, int i) {
    if (str[i] == '\0')
        return 0;
    if (str[i] >= '0' && str[i] <= '9')
        return 1 + how_many_digits(str, i + 1);
    return how_many_digits(str, i + 1); 
}

