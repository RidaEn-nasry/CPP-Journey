/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:00:23 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/23 17:36:20 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP 
# define CAT_HPP

#include <Animal.hpp>
#include <iostream>
#include <Brain.hpp>


class   Cat : public Animal {
    public: 
        Cat();
        ~Cat();
        Cat(const Cat &other);
        Cat& operator=(const Cat& rhs);
        void makeSound() const;
        const Cat *getMemAddr( void ) const;
        
    private:
        Brain *_brains;
};

#endif