/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:40:52 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/26 16:43:56 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>

ShrubberyCreationForm::ShrubberyCreationForm ( std::string target ) : Form ( "Shrubbery Form", 145, 137 ) {
    this->_target = target;
};

ShrubberyCreationForm::~ShrubberyCreationForm () {};
ShrubberyCreationForm::ShrubberyCreationForm ( const ShrubberyCreationForm& other ) : Form ( "Shrubbery Form", 145, 137 ) {
    *this = other;
};

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& rhs ) {
    if (this != &rhs) {
        this->_target = rhs._target;
    }
    return *this;
}

const std::string& ShrubberyCreationForm::getTarget () const {
    return this->_target;
}


void    ShrubberyCreationForm::execute ( const Bureaucrat& executor ) const {
    if (executor.getGrade () > this->getExecGrade ()) {
        throw Form::GradeTooLowException ();
        return;
    }
    else if (this->getSign () == false)
    {
        throw Form::FormNotSignedException ();
        return;
    }
    std::ofstream file ( this->_target + "_shrubbery" );
    file << "   /\\_/\\" << std::endl;
    file << "  ( o.o )" << std::endl;
    file << "   > ^ <" << std::endl;
    file.close ();
};

Form* ShrubberyCreationForm::newForm ( std::string target ) {
    return new ShrubberyCreationForm ( target );
}