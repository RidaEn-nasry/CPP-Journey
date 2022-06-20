/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrongmain.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:29:42 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/20 14:28:43 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>
#include <WrongDog.hpp>

int main()
{
    /* ************************************************************************** */
    /*          use of duplicate non-virtual function with pointers               */
    /* ************************************************************************** */
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* j = new WrongDog();
    const WrongAnimal* i = new WrongCat();
    std::cout << j->getType() << " " << std::endl; // Dog
    std::cout << i->getType() << " " << std::endl; // Cat
    i->makeSound(); 
    j->makeSound();
    meta->makeSound();    
    return 0;
}