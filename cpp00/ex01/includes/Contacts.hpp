/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:26:51 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/13 10:01:23 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP
#include <iostream>
#include <iomanip>

# define LOG_TRUNC(str) (str.length() > 10 ? std::cout << std::setw(10) << std::right << str.substr(0, 9) << "." : std::cout << std::setw(10) << std::right << str)

class   Contacts{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        void        GetContacts();
        void        printContacts();
        bool        isEmptyContact();
        void        printMenu(int index);
};

#endif

