/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:38:13 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/26 16:29:34 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include  <iostream>
# include <Form.hpp>

class  RobotomyRequestForm : public Form {
private:
    std::string _target;
public:
    RobotomyRequestForm ( std::string target );
    RobotomyRequestForm ( const RobotomyRequestForm& other );
    RobotomyRequestForm& operator=( const RobotomyRequestForm& rhs );
    ~RobotomyRequestForm ();
    const std::string& getTarget ( void ) const;
    void    execute ( Bureaucrat const& executor ) const;
};

#endif