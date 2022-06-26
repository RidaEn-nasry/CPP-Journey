/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:29:38 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/25 19:59:18 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class   Form {
public:
    Form ();
    Form ( std::string name, int grade, int execGrade );
    ~Form ();
    Form ( const Form& other );
    Form& operator=( const Form& rhs );
    const std::string& getName ( void ) const;
    bool    getSign ( void ) const;
    int     getGrade ( void ) const;
    int     getExecGrade ( void ) const;
    void    beSigned ( Bureaucrat& b );

    class   GradeTooHighException : public std::exception {
    public:
        virtual const char* what () const throw() = 0;
    };
    class   GradeTooLowException : public std::exception {
    public:
        virtual const char* what () const throw() = 0;
    };
    class   FormAlreadySignedException : public std::exception {
    public:
        virtual const char* what () const throw() = 0;
    };

private:
    const std::string _name;
    const int   _grade;
    const int  _execGrade;
    bool       _signed;

};

std::ostream& operator<<( std::ostream& out, Form& rhs );

#endif