/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:58:50 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/07/02 13:46:48 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <templates.hpp>


int main(void) {
    int a = 2;
    int b = 3;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

    // Awesome class tests
    Awesome awesome(2) ,awesome2(4);
    std::cout << "awesome = " << awesome << std::endl;
    std::cout << "awesome2 = " << awesome2 << std::endl;
    ::swap(awesome, awesome2);
    std::cout << "awesome = " << awesome << std::endl;
    std::cout << "awesome2 = " << awesome2 << std::endl;
    std::cout << "min( awesome, awesome2 ) = " << ::min(awesome, awesome2) << std::endl;
    std::cout << "max( awesome, awesome2 ) = " << ::max(awesome, awesome2) << std::endl;
    return 0;
}
