/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 13:29:14 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/18 18:10:57 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

/**
 * @brief check whether the point is in the triangle or not
 * @note
 * @param  a: vertex of the triangle
 * @param  b: vertex of the triangle
 * @param  c: vertex of the triangle
 * @param  point: point to check
 * @retval  true if the point is in the triangle false otherwise
 */


bool    bsp( Point const a, Point const b, Point const c, Point const point )
{
    float area1 = point.getArea( a, b, c );
    float area2 = point.getArea( a, b, point );
    float area3 = point.getArea( a, c, point );
    float area4 = point.getArea( b, c, point );
    return (area1 == area2 + area3 + area4);
}
