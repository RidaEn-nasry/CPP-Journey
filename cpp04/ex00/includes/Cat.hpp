/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:00:23 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/24 07:29:45 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP 
# define CAT_HPP

#include <WrongAnimal.hpp>
// #include <Animal.hpp>
#include <iostream>

class   Cat : public Animal {
public:
    Cat ();
    ~Cat ();
    Cat ( const Cat& other );
    Cat& operator=( const Cat& rhs );
    virtual void makeSound () const;
};

#endif