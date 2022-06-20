/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 06:53:56 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/20 09:07:00 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class   WrongAnimal {

public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal( WrongAnimal const& other );
    WrongAnimal& operator=( WrongAnimal const& rhs );
    void    makeSound() const;
    std::string     getType( void ) const;
protected:
    std::string _type;
};


#endif
