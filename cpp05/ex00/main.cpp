/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 08:56:33 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/25 11:26:43 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp> 

int main ( void ) {

    // Valid instantiation
    std::cout << "*************************************************************" << std::endl;
    std::cout << "                 Valid instantiation" << std::endl;
    std::cout << "*************************************************************" << std::endl;
    Bureaucrat boss ( "Dan", 1 );
    std::cout << boss.getName () << std::endl;
    boss.getGrade ();
    std::cout << boss << std::endl;

    // Invalid instantiation 
    std::cout << std::endl;
    std::cout << "*************************************************************" << std::endl;
    std::cout << "                 Invalid instantiation" << std::endl;
    std::cout << "*************************************************************" << std::endl;

    try {
        Bureaucrat boss2 ( "Pena", 151 );
    }
    catch (Bureaucrat::GradeTooLowException& e) {
        std::cout << e.what () << std::endl;
    }

    try {
        Bureaucrat boss3 ( "Joe", 0 );
    }
    catch (Bureaucrat::GradeTooHighException& e) {
        std::cout << e.what () << std::endl;
    }

    // valid increment and decrement
    std::cout << std::endl;
    std::cout << "*************************************************************" << std::endl;
    std::cout << "                 Valid increment and decrement" << std::endl;
    std::cout << "*************************************************************" << std::endl;
    boss.decrementGrade ();
    boss.incrementGrade ();
    std::cout << boss << std::endl;

    // invalid increment and decrement
    std::cout << std::endl;
    std::cout << "*************************************************************" << std::endl;
    std::cout << "                 Invalid increment and decrement" << std::endl;
    std::cout << "*************************************************************" << std::endl;
    try {
        boss.incrementGrade ();
    }
    catch (Bureaucrat::GradeTooHighException& e) {
        std::cout << e.what () << std::endl;
    }
    Bureaucrat boss4 ( "Alex", 150 );
    try {
        boss4.decrementGrade ();
    }
    catch (Bureaucrat::GradeTooLowException& e) {
        std::cout << e.what () << std::endl;
    }
    
    // exception is catchable by std::exception
    std::cout << std::endl;
    std::cout << "*************************************************************" << std::endl;
    std::cout << "                 Exception is catchable by std::exception" << std::endl;
    std::cout << "*************************************************************" << std::endl;
    try {
        throw Bureaucrat::GradeTooHighException();
    }
    catch (std::exception& e) {
        std::cout << e.what () << std::endl;
    }
    try {
        throw Bureaucrat::GradeTooLowException();
    }
    catch (std::exception& e) {
        std::cout << e.what () << std::endl;
    }
    return 0;
}
