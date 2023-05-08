/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 01:14:50 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
using namespace std;
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const string 	name;
	bool 			signe;
	const int		grade_sign;
	const int		grade_exec;
public:
	Form(void);
	Form(string name, int grade_sign, int grade_exec);
	Form(Form const &src);
	~Form();
	string	getName(void);
	int		getGradeSign(void);
	int		getGradeExec(void);
	bool	getSigned(void);
	Form&	operator=(Form const& rsh);
	void	beSigned(Bureaucrat& b);
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("The current form cannot be signed by such a fake bureaucrat.");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("The current form cannot be signed by such a low graded bureaucrat.");
		}
	};
};

std::ostream&	operator<<(std::ostream &s, Form const &rhs);

#endif