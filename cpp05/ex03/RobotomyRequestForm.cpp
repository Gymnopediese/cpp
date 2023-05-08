/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 18:35:07 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <unistd.h>

RobotomyRequestForm::RobotomyRequestForm(void) : Form("_shrubbery ", 145, 137), target("")
{
	
}

RobotomyRequestForm::RobotomyRequestForm(string target) : Form("_shrubbery ", 145, 137), target(target)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src.name, src.grade_sign, src.grade_exec), target(src.target)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& rsh)
{
	(void) rsh;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat& b) const
{
	static int used;

	if (used == 0 && ++used)
		std::srand(std::time(nullptr)); // use current time as seed for random generator
	if (signe)
	{
		if (b.getGrade() > grade_exec)
			throw Form::GradeTooLowException();
    	int random_variable = std::rand();
		cout << "beepp bbeeep" << endl;
		sleep(1);
		cout << "grreeeee grreeee bacaboom" << endl;
		sleep(1);
		cout << "pioupiou pioupiou" << endl;
		sleep(1);
		if (random_variable % 2)
			cout << target << " was successfuly changed to a robot." << endl;
		else 
			cout << target << " is dead due to some calculations errors, sorry to whoever loved him." << endl;
	}
	else
		std::cout << "form is not signed."<< std::endl;
}