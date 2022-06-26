/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 08:56:33 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/26 20:11:38 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <Form.hpp>
#include <ShrubberyCreationForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <Intern.hpp>

int main(void)
{

    // initialization test
    std::cout << "**************************************************************************" << std::endl;
    std::cout << "*                         valid instantiation test                       *" << std::endl;
    std::cout << "**************************************************************************" << std::endl;
    std::cout << std::endl;
    ShrubberyCreationForm form1("home");
    PresidentialPardonForm form2("Tim Cook");
    RobotomyRequestForm form3("Robot Bob");
    // getters test
    std::cout << "Target: " << form1.getTarget() << std::endl;
    std::cout << "Target: " << form2.getTarget() << std::endl;
    std::cout << "Target: " << form3.getTarget() << std::endl;

    std::cout << std::endl;
    std::cout << "**************************************************************************" << std::endl;
    std::cout << "*                       valid arguments to execute() test                *" << std::endl;
    std::cout << "**************************************************************************" << std::endl;
    std::cout << std::endl;
    /*
        valid testing of execute() member function
            * Bureaucrat bob has the previledge to execute the form and all forms are signed.
    */
    Bureaucrat bure("Bob", 1);
    bure.signForm(form1);
    form1.execute(bure);
    bure.signForm(form2);
    form2.execute(bure);
    bure.signForm(form3);
    form3.execute(bure);

    std::cout << std::endl;
    std::cout << "**************************************************************************" << std::endl;
    std::cout << "*                          invalid arguments to execute() test           *" << std::endl;
    std::cout << "**************************************************************************" << std::endl;
    std::cout << std::endl;

    /* invalid testing of execute() member function
     * form is signed but bureaucrat has no previledge to execute the form.
     */
    Bureaucrat bure2("Bob", 6);
    try
    {
        form2.execute(bure2);
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }

    // bureaucrat has the previledge to execute the form but the form is not signed.
    Bureaucrat bure3("Bob", 8);
    RobotomyRequestForm form4("Robot Request");
    try
    {
        form4.execute(bure3);
    }
    catch (Form::FormNotSignedException &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "**************************************************************************" << std::endl;
    std::cout << "*           testing of executeForm() member function               *" << std::endl;
    std::cout << "**************************************************************************" << std::endl;
    std::cout << std::endl;
    /*
        valid testing of executeForm() member function
            * Bureaucrat bob has the previledge to execute the form and form is signed.
    */
    Bureaucrat bure4("Bob", 1);
    PresidentialPardonForm form5("Ceo has been fired");
    bure4.signForm(form5);
    bure4.executeForm(form1);

    /*
        invalid testing of executeForm() member function
            * form is signed but bureaucrat has no previledge to execute the form.
    */
    Bureaucrat bure5("Bob", 76);
    try
    {
        Bureaucrat bure5("Bob", 6);
        bure5.executeForm(form5);
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }

    /*
        invalid testing of executeForm() member function
            * form is not signed but bureaucrat has the previledge to execute the form.
    */

    RobotomyRequestForm form6("Robot Request");
    try
    {
        bure.executeForm(form6);
    }
    catch (Form::FormNotSignedException &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "**************************************************************************" << std::endl;
    std::cout << "*                       intern class test                                *" << std::endl;
    std::cout << "**************************************************************************" << std::endl;
    std::cout << std::endl;
    /*
        valid testing of intern class
            * valid form name for intern class
    */
    Intern intern;
    Form *form7 = intern.makeForm("robotomy request", "Robot Bob");
    Form *form8 = intern.makeForm("presidential pardon", "Tim Cook");
    Form *form9 = intern.makeForm("shrubbery creation", "home");
    delete form7;
    delete form8;
    delete form9;

    /* invalid testing of intern class
     * invalid form's names
     */
    Form *form10 = intern.makeForm("non-existent", "b");
    delete form10;

    return 0;
}