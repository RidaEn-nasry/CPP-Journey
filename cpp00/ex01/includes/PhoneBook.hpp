/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:09:39 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/13 10:01:26 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <Contacts.hpp>
# include <stdlib.h>

# include <string>



class PhoneBook
{
    public:
        void        addContact();
        bool        SearchContact();
        int         GetLastIndex();

    private:
        Contacts    contacts[8];
        void        PrintMenu();
        bool        PrintAllContacts(int index);

};

#endif