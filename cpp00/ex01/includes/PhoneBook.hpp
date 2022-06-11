/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:09:39 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/11 18:35:21 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <Contacts.hpp>
# include <stdlib.h>
# include <iomanip>
# include <string>

# define LOG_TRUNC(str) (str.length() > 10 ? std::cout << std::setw(10) << std::right << str.substr(0, 9) << "." : std::cout << std::setw(10) << std::right << str)


class PhoneBook
{
    public:
        Contacts    contacts[8];
        void        AddContact();
        bool        SearchContact();
        int         GetLastIndex();

    private:
        void        PrintMenu();
        bool        PrintAllContacts(int index);

};

#endif