/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2022/06/20 06:55:16 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/20 08:31:31 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
/*   Created: 2022/06/23 09:32:46 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/23 10:50:01 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


>>>>>>> f5882e6 (cpp04 ex00 ex01 ex02 finished)
#ifndef DOG_HPP
# define DOG_HPP

# include <Animal.hpp>
# include <iostream>
<<<<<<< HEAD

class   Dog : public Animal {
public:
    Dog();
    ~Dog();
    Dog( const Dog& other );
    Dog& operator=( const Dog& rhs );
    void    makeSound() const ;
=======
// #include <WrongAnimal.hpp>

class   Dog : public Animal {
    public:
        Dog();
        ~Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& rhs);
        virtual void    makeSound() const;
>>>>>>> f5882e6 (cpp04 ex00 ex01 ex02 finished)
};

#endif