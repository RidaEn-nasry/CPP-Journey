/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 12:39:11 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/18 18:10:09 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

int main( void ) {

    Point p1( 10, 15 );
    Point p2( 30.5f, 40.1f );
    Point p3( 70.1f, 30.3f );
    Point point( 15, 17 );
    std::cout << "p1: " << p1.getX() << " " << p1.getY() << std::endl;
    std::cout << "p2: " << p2.getX() << " " << p2.getY() << std::endl;
    std::cout << "p3: " << p3.getX() << " " << p3.getY() << std::endl;
    std::cout << "point: " << point.getX() << " " << point.getY() << std::endl;
    std::cout << "Area of triangle (p1, p2, p3): " << p1.getArea( p1, p2, p3 ) << std::endl;
    bsp( p1, p2, p3, point ) == true ? std::cout << "Point is in the triangle" << std::endl : std::cout << "Point is not in the triangle" << std::endl;
    return 0;
}
