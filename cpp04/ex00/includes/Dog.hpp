/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:32:46 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/24 07:29:39 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

#include <WrongAnimal.hpp>
// # include <Animal.hpp>
# include <iostream>

class   Dog : public Animal {
public:
    Dog ();
    ~Dog ();
    Dog ( const Dog& other );
    Dog& operator=( const Dog& rhs );
    virtual void    makeSound () const;
};

#endif