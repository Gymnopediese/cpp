/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:24:41 by albaud            #+#    #+#             */
/*   Updated: 2022/11/12 21:06:33 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat joe;
	Bureaucrat iliboy;
	Bureaucrat tobad;
	try
	{
		Bureaucrat joe = Bureaucrat("joe", 150);
		Bureaucrat iliboy = Bureaucrat("mais", 0);
		Bureaucrat tobad = Bureaucrat("bad", 1200);
		
	}
	catch(const std::exception& e)
	{
		cout << e.what() << endl;
	}
	cout << joe << endl;
	cout << iliboy << endl;
	cout << tobad << endl;
	try
	{
		joe.decrementGrade();	
	}
	catch(const std::exception& e)
	{
		cout << e.what() << endl;
	}
}