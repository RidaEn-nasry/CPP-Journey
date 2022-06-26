/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 11:16:52 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/26 16:40:05 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <PresidentialPardonForm.hpp>
#include <Bureaucrat.hpp>

PresidentialPardonForm::PresidentialPardonForm ( std::string target ) : Form ( "Presidential Pardon Form ", 25, 5 ) {
    this->_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm () {};

PresidentialPardonForm::PresidentialPardonForm ( const PresidentialPardonForm& other ) : Form ( "Presidential Pardon Form", 25, 5 ) {
    *this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& rhs ) {
    if (this != &rhs)
        this->_target = rhs._target;
    return *this;
}

const std::string& PresidentialPardonForm::getTarget () const {
    return this->_target;
}

void    PresidentialPardonForm::execute ( Bureaucrat const& executor ) const {

    if (this->getSign () == false)
    {
        throw Form::FormNotSignedException ();
        return;
    }
    else if (executor.getGrade () > this->getExecGrade ())
    {
        throw Form::GradeTooLowException ();
        return;
    }
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
};

