/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 12:43:17 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/18 18:11:13 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

Point::Point() : _x( 0 ), _y( 0 ) {};

Point::Point( const float x, const float y ) : _x( x ), _y( y ) {};

Point& Point::operator=( const Point& rhs ) {
    (void)rhs;
    return *this;
}

Point::Point( const Point& other ) : _x( other._x ), _y( other._y ) {};

Point::~Point() {};

float   Point::getX() const { return _x.toFloat(); };
float   Point::getY() const { return _y.toFloat(); };

float   Point::getArea( const Point& a, const Point& b, const Point& c ) const
{
    return (abs( a.getX() * (b.getY() - c.getY()) +
        b.getX() * (c.getY() - a.getY()) +
        c.getX() * (a.getY() - b.getY()) ) / 2.0);
}
