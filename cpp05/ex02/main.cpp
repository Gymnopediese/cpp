/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:24:41 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 22:02:07 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

#define TRY try{
#define CATCH }catch(std::exception& e){ std::cout << e.what() << std::endl;}
int	main()
{
	Bureaucrat	joe;
	Bureaucrat	iliboy;
	ShrubberyCreationForm jardin = ShrubberyCreationForm("jardin");
	PresidentialPardonForm pardon = PresidentialPardonForm("jesus");
	RobotomyRequestForm robot = RobotomyRequestForm("jesus");

	joe 	= Bureaucrat("joe", 1);
	iliboy 	= Bureaucrat("ill", 150);
	iliboy.signForm(jardin);
	jardin.execute(joe);
	joe.signForm(jardin);
	joe.signForm(pardon);
	joe.signForm(robot);
	joe.executeForm(jardin);
	joe.executeForm(pardon);
	joe.executeForm(robot);
	iliboy.executeForm(jardin);
	iliboy.executeForm(pardon);
	iliboy.executeForm(robot);
	
}