/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:56:55 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/26 14:51:13 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
# include <Form.hpp>

Bureaucrat::Bureaucrat () {};

Bureaucrat::Bureaucrat ( std::string name, int grade ) : _name ( name )
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException ();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException ();
    else
        this->_grade = grade;
}

Bureaucrat::~Bureaucrat () {};

Bureaucrat::Bureaucrat ( const Bureaucrat& other ) {
    *this = other;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& rhs ) {
    if (this != &rhs)
        this->_grade = rhs._grade;
    return *this;
}

const std::string& Bureaucrat::getName ( void ) const {
    return this->_name;
}

int   Bureaucrat::getGrade ( void ) const {
    return this->_grade;
}

std::ostream& operator<<( std::ostream& out, Bureaucrat& rhs )
{
    out << rhs.getName () << ", bureaucrat grade " << rhs.getGrade ();
    return out;
}

const char* Bureaucrat::GradeTooLowException::what () const throw () {
    return "grade is too low, it should be: 150 > grade > 0 ";
}

const char* Bureaucrat::GradeTooHighException::what () const throw() {
    return "grade is too high, it should: 150 > grade > 0";
}

void    Bureaucrat::incrementGrade ( void ) {
    try {
        if (this->_grade > 1)
            this->_grade--;
        else
            throw Bureaucrat::GradeTooHighException ();
    }
    catch (Bureaucrat::GradeTooHighException& e) {
        std::cout << e.what () << std::endl;
    }
}

void    Bureaucrat::decrementGrade ( void ) {
    if (this->_grade < 150)
        this->_grade++;
    else
        throw Bureaucrat::GradeTooLowException ();
}

void    Bureaucrat::signForm ( Form& f ) {

    try {
        f.beSigned ( *this );
    }
    catch (std::exception& e) {
        std::cout << this->_name << " couldn't sign " << f.getName () << " because " << e.what () << std::endl;
        return;
    }
    if (f.getSign ())
        std::cout << this->_name << " signed " << f.getName () << std::endl;
}

void    Bureaucrat::executeForm ( const Form& f ) {
    if (f.getSign ())
    {
        if (this->_grade <= f.getExecGrade ())
        {
            f.execute ( *this );
            std::cout << this->_name << " executed " << f.getName () << std::endl;
        }
        else
            std::cout << this->_name << " can't execute " << f.getName () << " because his grade is too low" << std::endl;
    }
    else
        std::cout << this->_name << " can't execute " << f.getName () << " because it's not signed yet" << std::endl;
}
