/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:54:56 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/29 21:26:26 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.hpp>

/**
 * @brief change the data to a raw pointer.
 * @note   the function uses reinterpret_cast to do it's job
 * @param  *data: type to serialize.
 * @retval  uintptr_t: raw pointer.
 */

uintptr_t serialize(Data *data) {
    return reinterpret_cast<uintptr_t>(data); 
}
