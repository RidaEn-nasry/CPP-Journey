/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:29:42 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/20 11:15:35 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>


/**
 * @brief  Module was Regarding sub-type poly, virtual functions, and dynamic poly, 
 * @IMPORTANT: Sub-type polymorphism can be achieved only by s
 *          
 * @note   - Sub-type 
 */


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl; // Dog
    std::cout << i->getType() << " " << std::endl; // Cat
    i->makeSound(); //will output the cat sound!
    j->makeSound(); //will output the dog sound!
    meta->makeSound(); 
    
    
    const Animal meta2;
    const Animal j2;
    const Animal i2;
    std::cout << j2.getType() << " " << std::endl; // Dog
    std::cout << i2.getType() << " " << std::endl; // Cat
    i2.makeSound(); //will output the cat sound!
    j2.makeSound(); // will output the dog sound!
    meta2.makeSound();
    
    delete meta;
    delete j;
    delete i;    
    return 0;
}