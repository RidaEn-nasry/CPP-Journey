/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:54:58 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/29 21:26:04 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.hpp>

/**
 * @brief  change raw pointer to data's type pointer
 * @note   the function uses reinterpret_cast to do it's job
 * @param  raw: raw pointer.
 * @retval Data*: type pointer.
 */

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
};

