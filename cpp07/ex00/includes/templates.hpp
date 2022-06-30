/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:54:18 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/30 15:41:29 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

#include <iostream>

template <typename T>
void    swap(T& value1, T& value2) {
    T tmp = value1;
    value1 = value2;
    value2 = tmp;
}

template <typename T>
T   min(T value1, T value2) {
    return (value1 < value2) ? value1 : value2;
}

template <typename T>
T   max(T value1, T value2) {
    return (value1 > value2) ? value1 : value2;
}

#endif
