/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 20:50:50 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/29 21:28:49 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HEADER_HPP
# define HEADER_HPP


#include <iostream>

class   Data {
public:
    size_t size;
    int  another_var;
};

uintptr_t   serialize(Data* data);
Data* deserialize(uintptr_t raw);

#endif 