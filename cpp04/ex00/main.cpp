/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:14:21 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/24 07:29:17 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>
// #include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete i;
    delete j;

    return 0;
}