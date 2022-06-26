/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:57:23 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/26 17:30:22 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
# define INTERN_HPP

#include <Form.hpp>
#include <iostream>


typedef struct s_forms {
    std::string name;
    Form* (Form::* f)(std::string);
} t_forms;

class Intern {
public:
    Intern ( void );
    Intern ( std::string name, std::string target );
    ~Intern ();
    Intern ( const Intern& other );
    Intern& operator=( const Intern& rhs );
    Form* makeForm ( std::string name, std::string target );

};

#endif