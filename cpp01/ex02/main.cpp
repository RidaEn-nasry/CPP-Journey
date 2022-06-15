/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:41:18 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/13 20:55:11 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main( void )
{
    std::string str;
    str = "HI THIS IS BRAIN";
    std::string& stringREF = str;
    std::string* stringPTR = &str;

    std::cout << "Memory address of str: " << &str << std::endl;
    std::cout << "Memory address of string pointer: " << &stringPTR << std::endl;
    std::cout << "Memory address of string reference: " << &stringREF << std::endl;
    std::cout << "Value of str: " << str << std::endl;
    std::cout << "Value of string pointer: " << *stringPTR << std::endl;
    std::cout << "Value of string reference: " << stringREF << std::endl;

}