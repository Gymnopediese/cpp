/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 18:35:07 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("_shrubbery ", 145, 137), target("")
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(string target) : Form("_shrubbery ", 145, 137), target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src.name, src.grade_sign, src.grade_exec), target(src.target)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rsh)
{
	(void) rsh;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat& b) const
{
	if (signe)
	{
		if (b.getGrade() > grade_exec)
			throw Form::GradeTooLowException();
		string name = target + "_shrubbery";
		ofstream myfile;
		myfile.open(name);
		myfile << "tree";
		myfile.close();
		cout << "trees were planted in " << target << endl;
	}
	else
		std::cout << "form is not signed."<< std::endl;
}