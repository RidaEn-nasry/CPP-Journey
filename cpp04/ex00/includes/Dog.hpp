/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 06:55:16 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/20 08:31:31 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <Animal.hpp>
# include <iostream>

class   Dog : public Animal {
public:
    Dog();
    ~Dog();
    Dog( const Dog& other );
    Dog& operator=( const Dog& rhs );
    void    makeSound() const ;
};

#endif