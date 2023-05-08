/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/12 21:04:12 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_H
# define SAMPLE_H
# include <iostream>
using namespace std;


class Bureaucrat
{
private:
	const string	name;
	int				grade;
public:
	Bureaucrat(void);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat(string name, int grade);
	~Bureaucrat();
	Bureaucrat&	operator=(Bureaucrat const& rsh);
	string	getName(void);
	int		getGrade(void);
	void	incrementGrade(void);
	void	decrementGrade(void);
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("The selected grade is to hight");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("The selected grade is to low");
		}
	};
};

std::ostream&	operator<<(std::ostream &s, Bureaucrat const &rhs);

#endif