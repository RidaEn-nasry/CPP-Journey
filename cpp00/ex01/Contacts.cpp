/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:12:33 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/13 09:57:18 by ren-nasr         ###   ########.fr       */
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

void    Contacts::printContacts()
{
    std::cout << "First name: " << this->first_name << std::endl;
    std::cout << "Last name: " << this->last_name << std::endl;
    std::cout << "Nickname: " << this->nickname << std::endl;
    std::cout << "Phone number: " << this->phone_number << std::endl;
    std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

bool    Contacts::isEmptyContact()
{
    if (this->first_name == "")
        return true;
    return false;
}

void    Contacts::printMenu(int index)
{
        LOG_TRUNC(std::to_string(index + 1));
        std::cout << " | ";
        LOG_TRUNC(this->first_name);
        std::cout << " | ";
        LOG_TRUNC(this->last_name);
        std::cout << " | ";
        LOG_TRUNC(this->nickname);
        std::cout << std::endl;
}