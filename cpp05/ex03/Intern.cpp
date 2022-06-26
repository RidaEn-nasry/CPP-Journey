/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:02:07 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/26 17:47:53 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>
#include <Form.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <ShrubberyCreationForm.hpp>

t_forms forms[3];

Intern::Intern() {};

Intern::Intern(std::string name, std::string target){

    // this->_forms[0].name = "robotomy request";
    // this->_forms[0].f = &Form::newForm;
    // this->_forms[1].name = "presidential pardon";
    // this->_forms[1].f = &Form::newForm;
    forms[0].name = "shrubbery creation";
    forms[0].f = &Form::newForm;
    forms[1].name = "robotomy request";
    forms[1].f = &Form::newForm;
    forms[2].name = "presidential pardon";
    forms[2].f = &Form::newForm;
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
    if (forms[i].name == name) {
        return new (forms[i].f)(target);
    }
   }
}
