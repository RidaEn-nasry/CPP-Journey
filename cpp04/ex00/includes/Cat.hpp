/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2022/06/20 06:54:38 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/20 08:31:25 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

# include <Animal.hpp>
# include <iostream>

class   Cat : public Animal {
    public:
        Cat();
        ~Cat();
        Cat(const Cat &other);
        Cat& operator=(const Cat &rhs);
        void    makeSound() const; 
=======
/*   Created: 2022/06/23 10:00:23 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/23 10:50:12 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP 
# define CAT_HPP

// #include <WrongAnimal.hpp>
#include <Animal.hpp>
#include <iostream>

class   Cat : public Animal {
    public: 
        Cat();
        ~Cat();
        Cat(const Cat &other);
        Cat& operator=(const Cat& rhs);
        virtual void makeSound() const;
>>>>>>> f5882e6 (cpp04 ex00 ex01 ex02 finished)
};

#endif