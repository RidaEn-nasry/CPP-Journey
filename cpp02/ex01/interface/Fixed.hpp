/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 22:25:35 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/18 08:41:23 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed {
public:
    Fixed();
    Fixed( const int n );
    Fixed( const float n );
    ~Fixed();
    Fixed( const Fixed& other );
    Fixed& operator=( const Fixed& other );
    float   toFloat( void ) const;
    int     toInt( void ) const;
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    

private:
    int _fixedPointValue;
    static int  _fractionalBits;
};

std::ostream& operator<<( std::ostream& os, const Fixed& self );
