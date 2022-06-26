/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 08:56:33 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/25 19:11:35 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp> 
#include <Form.hpp>

int main ( void ) {
    // valid instantiation
    std::cout << "*************************************************************" << std::endl;
    std::cout << "                 Valid instantiation" << std::endl;
    std::cout << "*************************************************************" << std::endl;
    Form importantForm ( "product launch", 1, 1 );
    std::cout << "name: " << importantForm.getName () << std::endl;
    std::cout << "grade: " << importantForm.getGrade () << std::endl;
    std::cout << "execution grade: " << importantForm.getExecGrade () << std::endl;
    std::cout << "form is: " << (importantForm.getSign () ? "signed" : "not signed") << std::endl;
    std::cout << importantForm << std::endl;
    // invalid instantiation 
    std::cout << std::endl;
    std::cout << "*************************************************************" << std::endl;
    std::cout << "                 Invalid instantiation" << std::endl;
    std::cout << "*************************************************************" << std::endl;
    try {
        Form invalidForm ( "invalid form", -1, 1 );
    }
    catch (std::exception& e) {
        std::cout << e.what () << std::endl;
    }
    try {
        Form invalidForm2 ( "invalid form2", 151, 1 );
    }
    catch (std::exception& e) {
        std::cout << e.what () << std::endl;
    }
    // valid signing of form 
    std::cout << std::endl;
    std::cout << "*************************************************************" << std::endl;
    std::cout << "                 Valid signing of form" << std::endl;
    std::cout << "*************************************************************" << std::endl;
    Bureaucrat boss ( "Dan", 1 );
    boss.signForm ( importantForm );
    Form importantForm2 ( "Acquisition Form", 1, 2 );
    importantForm2.beSigned ( boss );
    std::cout << importantForm2.getName () << " is " << (importantForm2.getSign () ? "signed" : "not signed") << std::endl;
    // invalid signing form

    std::cout << std::endl;
    std::cout << "*************************************************************" << std::endl;
    std::cout << "                 Invalid signing of form" << std::endl;
    std::cout << "*************************************************************" << std::endl;
    Bureaucrat employee ( "employee", 10 );
    try {
        importantForm.beSigned ( employee );
    }
    catch (std::exception& e) {
        std::cout << e.what () << std::endl;
    }
    try {
        employee.signForm ( importantForm );
    }
    catch (std::exception& e) {
        std::cout << e.what () << std::endl;
    }


}