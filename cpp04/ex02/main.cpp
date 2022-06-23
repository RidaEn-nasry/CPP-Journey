/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:14:21 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/23 17:47:56 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */






#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>



int main()
{
    /*****************************************************
                            Ex00
    ******************************************************/
 
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();
    

    /*****************************************************
                            Ex01                           
    ******************************************************/

    // Polymorphism using arrays
    // Animal **animalsArr = new Animal*[10];
    // for (int i = 0; i < 10; i++)
    //     i > 5 ? animalsArr[i] = new Cat() : animalsArr[i] = new Dog();
    // for (int i = 0; i < 10; i++)
    //     delete animalsArr[i];
    // delete[] animalsArr;
   
   
    // testing deep copy of copyctr 
    
    
    // Cat cat;
    // Cat copy_cat(cat);
    // std::cout << "Memory address of cat : " << cat.getMemAddr() << " is different from that of copy_cat: " \
    //     << copy_cat.getMemAddr() << " which means copyctr have done a deep copy." << std::endl;
    // Dog dog;
    // Dog copy_dog(dog);
    // std::cout << "Same for dog: memory address of dog : " << dog.getMemAddr() << " is different from that of copy_dog: " \
    //     << copy_dog.getMemAddr() << " which means copyctr have done a deep copy." << std::endl;
    
    // // leaks tests (virtual destructors)
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    
    // delete i;
    // std::cout << "Car destructor called first, hence no memory leaks." << std::endl;
    // delete j;
    // std::cout << "Same for Dog, the destructor called first, hence no memory leaks." << std::endl;        

    /*****************************************************
                            Ex02                          
    ******************************************************/
    
    // Wrong tests
    // Animal test;
    

    // Correct tests
    Dog dog;
    dog.makeSound();
    Cat cat;
    cat.makeSound();
    std::cout << "Notice no constructor nor a destructor is called for Animal as it is just an interface now." << std::endl;
    std::cout << "Notice too that makeSound() function as before." << std::endl;
    
    // Copy constructor still deep copy 
    Cat cat2;
    Cat cat_copy(cat);
    std::cout << "Mem address of cat : " << cat2.getMemAddr() << " and copy_cat " << cat_copy.getMemAddr() << " is still different." << std::endl;    
    Dog dog2;
    Dog dog_copy(dog);
    std::cout << "Mem address of dog : " << dog2.getMemAddr() << " and copy_cat " << dog_copy.getMemAddr() << " is still different." << std::endl;
    return 0;
}