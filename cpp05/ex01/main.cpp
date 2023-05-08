/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:24:41 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 01:14:12 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat	joe;
	Bureaucrat	iliboy;
	Form		divorce = Form("divorce", 50, 50);
	
	joe 	= Bureaucrat("joe", 42);
	iliboy 	= Bureaucrat("ill", 100);
	
	iliboy.signForm(divorce);
	joe.signForm(divorce);

	cout << divorce << endl;

}