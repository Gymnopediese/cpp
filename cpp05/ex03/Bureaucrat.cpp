/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 19:04:41 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("joe"), grade(150)
{
	
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.name)
{
	this->grade = src.grade;
}

Bureaucrat::Bureaucrat(string name, int grade) : name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = grade;
}

void	Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(std::exception& e)
	{
		cout << "couldn't sign form because " << e.what() << endl;
	}
}

void	Bureaucrat::executeForm(Form& form)
{
	try
	{
		form.execute(*this);
	}
	catch(std::exception& e)
	{
		cout << "couldn't exec form because " << e.what() << endl;
	}
}

Bureaucrat::~Bureaucrat()
{
	
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& rsh)
{
	this->grade = rsh.grade;
	return (*this);
}

string	Bureaucrat::getName(void)
{
	return (name);
}
int		Bureaucrat::getGrade(void)
{
	return (grade);
}
void	Bureaucrat::incrementGrade(void)
{
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = grade - 1;
}
void	Bureaucrat::decrementGrade(void)
{
	if (grade + 1> 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade = grade + 1;
}

std::ostream&	operator<<(std::ostream &s, Bureaucrat const &rhs)
{
	s << ((Bureaucrat) rhs).getName() << ", bureaucrat of grade " << ((Bureaucrat) rhs).getGrade() << endl;
	return (s);
}