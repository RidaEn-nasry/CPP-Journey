/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:57:23 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/26 19:55:56 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
# define INTERN_HPP

#include <Form.hpp>
#include <iostream>

class Intern {
public:
    Intern ( void );
    ~Intern ();
    Intern ( const Intern& other );
    Intern& operator=( const Intern& rhs );
    Form* makeForm ( std::string name, std::string target );
    // this is the array of forms
    Form* createPresidentialPardonForm ( std::string target );
    Form* createRobotomyRequestForm ( std::string target );
    Form* createShrubberyCreationForm ( std::string target );
    // Form* (Intern::* forms[3])(std::string);
    
    private:
        typedef struct s_forms {
            std::string name;
            Form* (Intern::* f)(std::string);
        } t_forms;
        t_forms forms[3];
};

#endif