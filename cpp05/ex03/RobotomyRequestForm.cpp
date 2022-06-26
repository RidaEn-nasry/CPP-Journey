/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 11:10:19 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/26 16:30:01 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>
#include <Bureaucrat.hpp>

RobotomyRequestForm::RobotomyRequestForm ( std::string target ) : Form ( "RobotmyRequest Form", 72, 45 ) {
    this->_target = target;
};

RobotomyRequestForm::RobotomyRequestForm ( const RobotomyRequestForm& other ) : Form ( "RobotmyRequest Form", 72, 45 ) {
    *this = other;
};

RobotomyRequestForm::~RobotomyRequestForm () {};

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& rhs ) {
    if (this != &rhs) {
        this->_target = rhs._target;
    }
    return *this;
}

const std::string& RobotomyRequestForm::getTarget () const {
    return this->_target;
}

void    RobotomyRequestForm::execute ( Bureaucrat const& executor ) const {
    if (this->getSign () == false)
    {
        std::cout << "Robotmy failed" << std::endl;
        throw Form::FormNotSignedException ();
        return;
    }
    else if (executor.getGrade () > this->getExecGrade ()) {
        std::cout << "Robotmy failed" << std::endl;
        throw Form::GradeTooLowException ();
        return;
    }
    std::cout << this->_target << " has been robotomized successfully 50% of the time" << std::endl;
};

