/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:38:32 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/26 14:51:08 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP


#include <Form.hpp>

class   PresidentialPardonForm : public Form {
private:
    std::string _target;
public:
    PresidentialPardonForm ( std::string target );
    ~PresidentialPardonForm ();
    PresidentialPardonForm ( const PresidentialPardonForm& other );
    PresidentialPardonForm& operator=( const PresidentialPardonForm& rhs );
    const std::string& getTarget ( void ) const;
    void    execute ( Bureaucrat const& execute ) const;
};


#endif
