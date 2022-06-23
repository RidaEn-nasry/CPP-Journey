/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:32:46 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/23 14:30:45 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

# include <Animal.hpp>
# include <iostream>
#include <Brain.hpp>

class   Dog : public Animal {
    public:
        Dog();
        ~Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& rhs);
        virtual void    makeSound() const;
        const Dog* getMemAddr(void) const;
    
    private:
        Brain *_brains;
};

#endif