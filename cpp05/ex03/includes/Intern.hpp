/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:57:23 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/26 20:18:21 by ren-nasr         ###   ########.fr       */
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
    Form* createPresidentialPardonForm ( std::string target );
    Form* createRobotomyRequestForm ( std::string target );
    Form* createShrubberyCreationForm ( std::string target );

private:
    typedef struct s_forms {
        std::string name;
        Form* (Intern::* f)(std::string);
    } t_forms;
    t_forms forms[3];
};

#endif