/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 05:42:11 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/24 07:34:57 by ren-nasr         ###   ########.fr       */
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
    void    makeSound() const;
    const std::string& getType(void) const;
protected:
    std::string _type;
};

#endif