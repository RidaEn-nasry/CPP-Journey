/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:02:07 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/26 20:02:35 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>
#include <Form.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <ShrubberyCreationForm.hpp>

// i will try to use an array store in it the pointers for virtual functiion makeForm();
//however there seems to be a problem which  

Intern::Intern(){
    this->forms[0].name = "robotomy request";
    this->forms[0].f = &Intern::createRobotomyRequestForm;
    this->forms[1].name = "presidential pardon";
    this->forms[1].f = &Intern::createPresidentialPardonForm;
    this->forms[2].name = "shrubbery creation";
    this->forms[2].f = &Intern::createShrubberyCreationForm;
};


Intern::~Intern() {};

Intern::Intern(const Intern& other) {
    *this = other;
}

Intern& Intern::operator=(const Intern& rhs) {
    if (this != &rhs)
        *this = rhs;
    return *this;
}

Form*   Intern::makeForm( std::string name, std::string target ) {
    for (int i = 0; i < 3; i++) {
        if (this->forms[i].name == name)
        {
            std::cout << "Intern creates " << this->forms[i].name << " form for " << target << std::endl;
            return (this->*forms[i].f)(target);
        }
    }
    std::cout << "Intern: Form not found" << std::endl;
    return NULL;
}

Form* Intern::createPresidentialPardonForm(std::string target) {
    return new PresidentialPardonForm(target);
}

Form* Intern::createRobotomyRequestForm(std::string target) {
    return new RobotomyRequestForm(target);
}

Form*  Intern::createShrubberyCreationForm(std::string target) {
    return new ShrubberyCreationForm(target);
}

