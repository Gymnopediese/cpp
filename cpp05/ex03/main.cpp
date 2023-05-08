/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:24:41 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 22:03:27 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

#define TRY try{
#define CATCH }catch(std::exception& e){ std::cout << e.what() << std::endl;}
int	main()
{
	Bureaucrat	joe;
	Bureaucrat	iliboy;
	Form 		*jardin;
	Form		*pardon;
	Form		*robot;
	Intern bill;

	robot = bill.makeForm("robotomy request", "Bender");
	jardin = bill.makeForm("shrubbery creation", "eden");
	pardon = bill.makeForm("presidential pardon", "jesus");
	bill.makeForm("eat spaghetti", "Bender");

	joe 	= Bureaucrat("joe", 1);
	iliboy 	= Bureaucrat("ill", 150);
	iliboy.signForm(*jardin);
	joe.signForm(*jardin);
	joe.signForm(*pardon);
	joe.signForm(*robot);
	joe.executeForm(*jardin);
	joe.executeForm(*pardon);
	joe.executeForm(*robot);
	iliboy.executeForm(*jardin);
	iliboy.executeForm(*pardon);
	iliboy.executeForm(*robot);
	
}