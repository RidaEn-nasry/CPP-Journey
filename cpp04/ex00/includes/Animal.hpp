/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 06:53:56 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/20 10:20:58 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP


# include <iostream>

class   Animal {

public:
    Animal();
    virtual ~Animal();
    Animal( Animal const& other );
    Animal& operator=( Animal const& rhs );
    virtual void    makeSound() const;
    std::string     getType( void ) const;
protected:
    std::string _type;
};


#endif
