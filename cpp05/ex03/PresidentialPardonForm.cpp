/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 18:35:07 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>
PresidentialPardonForm::PresidentialPardonForm(void) : Form("_shrubbery ", 145, 137), target("")
{
	
}

PresidentialPardonForm::PresidentialPardonForm(string target) : Form("_shrubbery ", 145, 137), target(target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src.name, src.grade_sign, src.grade_exec), target(src.target)
{
	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& rsh)
{
	(void) rsh;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat& b) const
{
	if (signe)
	{
		if (b.getGrade() > grade_exec)
			throw Form::GradeTooLowException();
		cout << "Zaphod Beeblebrox publicly gave his pardon to " << target << "." << endl;
	}
	else
		std::cout << "form is not signed."<< std::endl;
}