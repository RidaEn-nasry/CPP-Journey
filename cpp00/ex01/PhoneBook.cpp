/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:53:47 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/13 11:11:14 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

int PhoneBook::GetLastIndex()
{
    int i = 0;
    for (; i < 8; i++)
    {
        if (this->contacts[i].isEmptyContact())
            break;
    }
    return (i);
}

bool PhoneBook::PrintAllContacts(int index)
{
    if (index > GetLastIndex())
    {
        std::cout << "Contact Unvailable" << std::endl;
        return false;
    }
    contacts[index].printContacts();
    return true;
}

void PhoneBook::addContact()
{
    if (GetLastIndex() == 8)
    {
        std::cout << "Contact is full" << std::endl;
        contacts[7].GetContacts();
    }
    else
        this->contacts[GetLastIndex()].GetContacts();
}

bool PhoneBook::SearchContact()
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

void PhoneBook::PrintMenu()
{
    int index = GetLastIndex() == -1 ? 8 : GetLastIndex();
    for (int i = 0; i < index; i++)
        contacts[i].printMenu(i);
}
