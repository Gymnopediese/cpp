/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 01:06:16 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name(""), signe(false), grade_sign(1), grade_exec(1)
{
}

Form::Form(Form const &src) : name(src.name), signe(src.signe), grade_sign(src.grade_sign), grade_exec(src.grade_exec)
{
	
}

Form::Form(string name, int grade_sign, int grade_exec) : name(name), signe(false), grade_sign(grade_sign), grade_exec(grade_exec)
{
	if (grade_sign > 150 || grade_exec > 150)
		throw Form::GradeTooLowException();
	if (grade_sign < 1 || grade_exec < 1)
		throw Form::GradeTooHighException();
}

void	Form::beSigned(Bureaucrat& b)
{
	if (signe)
		cout << "the formulair is already signed." << endl;
	else if (b.getGrade() > grade_sign)
		throw Form::GradeTooLowException();
	else
	{
		signe = true;
		cout << "the formulair has been signed successfuly." << endl;
	}
}

string	Form::getName(void)
{
	return (name);
}

int		Form::getGradeSign(void)
{
	return ((int)grade_sign);
}

int	Form::getGradeExec(void)
{
	return (grade_exec);
}

bool	Form::getSigned(void)
{
	return (signe);
}

Form::~Form()
{
}

Form&	Form::operator=(Form const& rsh)
{
	signe = rsh.signe;
	return (*this);
}

std::ostream&	operator<<(std::ostream &s, Form const &rhs)
{
	Form f = rhs;
	if (f.getSigned())
		s << f.getName() << " was sign by a bureaucrat whit a grade of "<< f.getGradeSign() << " or higher and can be execute by by a bureaucrat whit a grade of " << f.getGradeExec() << " or higher.";
	else
		s << f.getName() << " is unsigned, it can be by a bureaucrat whit a grade of "<< f.getGradeSign() << " or higher and can be execute by by a bureaucrat whit a grade of " << f.getGradeExec() << " or higher.";
	return (s);
}