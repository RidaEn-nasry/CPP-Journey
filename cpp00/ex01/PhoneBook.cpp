/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:53:47 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/11 18:45:47 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

int PhoneBook::GetLastIndex()
{
    int i = 0;
    for (; i < 8; i++)
    {
        if (this->contacts[i].first_name == "")
            break;
    }
    return (i);

}
bool    PhoneBook::PrintAllContacts(int index)
{
    if (index > GetLastIndex())
    {
        std::cout << "Contact Unvailable" << std::endl;
        return false;
    }
    std::cout << "First name: " << contacts[index].first_name << std::endl;
    std::cout << "Last name: " << contacts[index].last_name << std::endl;
    std::cout << "Nickname: " << contacts[index].nickname << std::endl;
    std::cout << "Phone number: " << contacts[index].phone_number << std::endl;
    std::cout << "Darkest secret: " << contacts[index].darkest_secret << std::endl;
    return true;
}

void    PhoneBook::AddContact()
{
    if (GetLastIndex() == 8)
    {
        std::cout << "Contact is full" << std::endl;
        contacts[7].GetContacts();
    }
    else 
        this->contacts[GetLastIndex()].GetContacts();   
}

bool    PhoneBook::SearchContact()
{
    PrintMenu();
    std::string search;
    while (1)
    {
        std::cout << "Search: ";
        std::cin >> search;
        if (search.find_first_not_of("0123456789") != -1)
        {
            std::cout << "Invalid search" << std::endl;
            continue;
        }
        if (std::stoi(search) < 1 || std::stoi(search) > 8)
        {
            std::cout << "We run out of phonebooks" << std::endl;     
            continue;
        } 
        if (!PrintAllContacts(std::stoi(search) - 1))
            continue;
        break;
    }
    return true;
}

void    PhoneBook::PrintMenu()
{
    int index = GetLastIndex() == -1 ? 8 : GetLastIndex();
    for (int i = 0; i < index; i++)
    {
        LOG_TRUNC(std::to_string(i + 1));
        std::cout << " | ";
        LOG_TRUNC(this->contacts[i].first_name);
        std::cout << " | ";
        LOG_TRUNC(this->contacts[i].last_name);
        std::cout << " | ";
        LOG_TRUNC(this->contacts[i].nickname);
        std::cout << std::endl;
    }
}
