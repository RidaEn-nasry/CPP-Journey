/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:37:45 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/26 19:50:52 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <Form.hpp>
#include <Bureaucrat.hpp>
# include <fstream>
class   ShrubberyCreationForm : public Form {
private:
    std::string _target;
public:
    ShrubberyCreationForm ( std::string target );
    ShrubberyCreationForm ( const ShrubberyCreationForm& other );
    ShrubberyCreationForm& operator=( const ShrubberyCreationForm& rhs );
    ~ShrubberyCreationForm ();
    const   std::string& getTarget ( void ) const;
    void    execute ( Bureaucrat const& executor ) const;
};


#endif


