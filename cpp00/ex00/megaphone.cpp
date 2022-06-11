/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:45:52 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/10 23:08:59 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define LOG(x) std::cout << x;

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        for (int i = 1; i < argc; i++)
            for (int j = 0; argv[i][j]; j++)
                LOG((char)toupper(argv[i][j]));
        std::cout << "\n";
    return (0);
}