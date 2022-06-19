/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 12:39:01 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/18 18:19:50 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
public:
    Fixed();
    Fixed( const int n );
    Fixed( const float n );
    ~Fixed();
    Fixed( const Fixed& rhs );
    Fixed& operator=( const Fixed& rhs );

    bool    operator>( const Fixed& rhs ) const;
    bool    operator<( const Fixed& rhs ) const;
    bool    operator>=( const Fixed& rhs ) const;
    bool    operator<=( const Fixed& rhs ) const;
    bool    operator==( const Fixed& rhs ) const;
    bool    operator!=( const Fixed& rhs ) const;

    Fixed   operator+( const Fixed& rhs ) const;
    Fixed   operator-( const Fixed& rhs ) const;
    Fixed   operator*( const Fixed& rhs ) const;
    Fixed   operator/( const Fixed& rhs ) const;

    Fixed   operator++();
    Fixed   operator++( int );
    Fixed   operator--();
    Fixed   operator--( int );


    float   toFloat( void ) const;
    int     toInt( void ) const;
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

private:
    int _fixedPointValue;
    static int  _fractionalBits;
};

std::ostream& operator<<( std::ostream& os, const Fixed& self );


#endif