/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 06:55:16 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/20 09:07:54 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP


# include <WrongAnimal.hpp>
# include <iostream>

class   WrongDog : public WrongAnimal {
public:
    WrongDog();
    ~WrongDog();
    WrongDog( const WrongDog& other );
    WrongDog& operator=( const WrongDog& rhs );
    void    makeSound() const ;

};

#endif