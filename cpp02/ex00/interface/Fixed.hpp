/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:29:21 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/18 12:52:46 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Fixed {
public:
    Fixed();
    ~Fixed();
    Fixed( const Fixed& other );
    Fixed& operator=( const Fixed& other );
    int getRawBits( void ) const;
    void    setRawBits( int const raw );

private:
    int _fixedPointValue;
    static int  _fractionalBits;
};
