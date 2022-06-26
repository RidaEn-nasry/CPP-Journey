/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:35:08 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/25 19:11:29 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <Form.hpp>

Form::Form () : _grade ( 1 ), _execGrade ( 1 ) {};

Form::Form ( std::string name, int grade, int execGrade ) : _name ( name ), _grade ( grade ), _execGrade ( execGrade ), _signed ( false ) {
    if (this->_grade < 1)
        throw Form::GradeTooHighException ();
    else if (this->_grade > 150)
        throw Form::GradeTooLowException ();
}

Form::~Form () {};

Form::Form ( const Form& other ) : _grade ( other._grade ), _execGrade ( other._execGrade ) {
    *this = other;
}

Form& Form::operator=( const Form& rhs ) {
    if (this != &rhs)
        this->_signed = rhs._signed;
    return *this;
}

const char* Form::GradeTooHighException::what () const throw() {
    return "Grade is too high, it should: 150 > grade > 0";
}

const char* Form::GradeTooLowException::what () const throw() {
    return "Grade is too low, it should: 150 > grade > 0";
}

const char* Form::FormAlreadySignedException::what () const throw() {
    return "Form is already signed";
}


std::ostream& operator<<( std::ostream& out, Form& rhs )
{
    out << "Form " << rhs.getName () << " is " << (rhs.getSign () ? "signed" : "not signed") << " and has a grade of " << rhs.getGrade () << " and an execution grade of " << rhs.getExecGrade () << std::endl;
    return out;
}

const std::string& Form::getName ( void ) const {
    return this->_name;
}

int  Form::getGrade ( void ) const {
    return this->_grade;
}

int Form::getExecGrade ( void ) const {
    return this->_execGrade;
}

bool    Form::getSign ( void ) const {
    return this->_signed;
}

void    Form::beSigned ( Bureaucrat& b ) {
    if (b.getGrade () > this->_grade)
        throw Form::GradeTooLowException ();
    else
        this->_signed = true;
}
