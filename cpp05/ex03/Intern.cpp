/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 22:01:00 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Form* makeShrub(string target)
{
	return new ShrubberyCreationForm(target);
}

Form* makeRobot(string target)
{
	return new RobotomyRequestForm(target);
}

Form* makePresidential(string target)
{
	return new PresidentialPardonForm(target);
}

Form*	Intern::makeForm(string name, string target) const
{
	Form *(*functions[])(string) = {makeShrub, makeRobot, makePresidential};
	string names[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (names[i] == name)
			return functions[i](target);
	}
	cout << name << " is not an existing formulair" << endl;
	return (0);
}

Intern::Intern()
{

}
Intern::~Intern()
{

}