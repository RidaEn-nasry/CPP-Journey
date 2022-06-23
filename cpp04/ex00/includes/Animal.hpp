/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2022/06/20 06:53:56 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/20 10:20:58 by ren-nasr         ###   ########.fr       */
=======
/*   Created: 2022/06/23 05:42:11 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/23 10:29:15 by ren-nasr         ###   ########.fr       */
>>>>>>> f5882e6 (cpp04 ex00 ex01 ex02 finished)
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

<<<<<<< HEAD

# include <iostream>

class   Animal {

public:
    Animal();
    virtual ~Animal();
    Animal( Animal const& other );
    Animal& operator=( Animal const& rhs );
    virtual void    makeSound() const;
    std::string     getType( void ) const;
=======
#include <iostream>

class   Animal {
public:
    Animal();
    ~Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    virtual void    makeSound() const;
    const std::string& getType( void ) const;
>>>>>>> f5882e6 (cpp04 ex00 ex01 ex02 finished)
protected:
    std::string _type;
};

<<<<<<< HEAD

#endif
=======
#endif
>>>>>>> f5882e6 (cpp04 ex00 ex01 ex02 finished)
