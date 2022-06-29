/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:54:54 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/29 21:26:22 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.hpp>

int main(void) {

    Data data;
    data.size = 10;
    data.another_var = 42;
    std::cout << "values of data: " << data.size << " " << data.another_var << std::endl;
    uintptr_t raw = serialize(&data);
    std::cout << "value of raw: " << raw << std::endl;
    Data* deserialized = deserialize(raw);
    std::cout << "values of data after deserialization: " << deserialized->size << " " << deserialized->another_var << std::endl;
    std::cout << "memory address of data after deserialization: " << &data << std::endl;

    // when shit can go wrong with reinterpret_cast
    // with static_cast
    float static_casted = 565.0;
    int integer = static_cast<int>(static_casted);
    std::cout << "static casted integer: " << integer << std::endl;

    // with reinterpret_cast
    int* reinterpret_casted = reinterpret_cast<int*>(&static_casted);
    std::cout << "reinterpret casted integer: " << *reinterpret_casted << std::endl;
    return 0;
}