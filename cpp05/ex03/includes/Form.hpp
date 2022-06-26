/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:29:38 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/26 17:33:43 by ren-nasr         ###   ########.fr       */
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
    virtual ~Form ();
    Form ( const Form& other );
    Form& operator=( const Form& rhs );
    const std::string& getName ( void ) const;
    bool    getSign ( void ) const;
    int     getGrade ( void ) const;
    int     getExecGrade ( void ) const;

    virtual void    beSigned ( Bureaucrat& b );
    virtual void    execute ( const Bureaucrat& executor ) const = 0;
    
    virtual Form* newForm(std::string target) = 0;
 
    class   GradeTooHighException : public std::exception {
    public:
        virtual const char* what () const throw();
    };
    class   GradeTooLowException : public std::exception {
    public:
        virtual const char* what () const throw();
    };
    class   FormAlreadySignedException : public std::exception {
    public:
        virtual const char* what () const throw();
    };
    class   FormNotSignedException : public std::exception {
    public:
        virtual const char* what () const throw();
    };


private:
    const std::string _name;
    const int   _grade;
    const int  _execGrade;
    bool       _signed;

};

std::ostream& operator<<( std::ostream& out, Form& rhs );

#endif