/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 11:08:41 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/13 11:11:12 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

int main(void)
{
    std::string command;
    PhoneBook pb;

    while (1)
    {
        std::cout << "> ";
        std::cin >> command;
        if (std::string(command) == "ADD")
            pb.addContact();
        else if (std::string(command) == "SEARCH")
            pb.SearchContact();
        else if (std::string(command) == "EXIT")
            exit(0);
        else
            std::cout << "Unknown command" << std::endl;
    }
    return (0);
}
