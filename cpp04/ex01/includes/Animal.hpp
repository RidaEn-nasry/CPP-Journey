/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 05:42:11 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/23 15:29:46 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class   Animal {
public:
    Animal();
    virtual ~Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    virtual void    makeSound() const;
    const std::string& getType( void ) const;
protected:
    std::string _type;
};

typedef Animal* animals;

#endif