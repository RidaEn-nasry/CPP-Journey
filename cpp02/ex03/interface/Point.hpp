/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 12:40:31 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/18 18:20:03 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_HPP
# define POINT_HPP
# include <Fixed.hpp>

class   Point {

public:
    Point();
    Point( const float x, const float y );
    Point( const Point& other );
    Point& operator=( const Point& other );
    ~Point();
    float   getX() const;
    float   getY() const;
    float   getArea( const Point& a, const Point& b, const Point& c ) const;

private:
    const Fixed _x;
    const Fixed _y;

};

bool    bsp( Point const a, Point const b, Point const c, Point const point );
#endif