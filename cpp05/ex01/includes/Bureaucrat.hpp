/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 08:33:57 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/26 20:16:37 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include <Form.hpp>


class   Bureaucrat {
private:
    const std::string _name;
    int _grade;

public:
    Bureaucrat ();
    ~Bureaucrat ();
    Bureaucrat ( std::string name, int grade );
    Bureaucrat ( const Bureaucrat& other );
    Bureaucrat& operator=( const Bureaucrat& rhs );

    const std::string& getName ( void ) const;
    int getGrade ( void ) const;
    void incrementGrade ( void );
    void decrementGrade ( void );
    void signForm ( Form& f );


    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what () const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what () const throw();
    };
};

std::ostream& operator<<( std::ostream& out, Bureaucrat& rhs );


#endif