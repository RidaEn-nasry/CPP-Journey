/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
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
};

#endif