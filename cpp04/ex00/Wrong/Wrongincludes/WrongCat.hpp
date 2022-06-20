/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 06:54:38 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/20 09:08:26 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <WrongAnimal.hpp>
# include <iostream>

class   WrongCat : public WrongAnimal {
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &other);
        WrongCat& operator=(const WrongCat &rhs);
        void    makeSound() const;
};

#endif