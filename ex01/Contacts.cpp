/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:12:33 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/11 18:35:50 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contacts.hpp>

void Contacts::GetContacts()
{
    std::cout << "Enter first name: ";
    std::cin >> this->first_name;
    std::cout << "Enter last name: ";
    std::cin >> this->last_name;
    std::cout << "Enter nickname: ";
    std::cin >> this->nickname;
    std::cout << "Enter phone number: ";
    std::cin >> this->phone_number;
    std::cout << "Enter darkest secret: ";
    std::cin >> this->darkest_secret;
}
