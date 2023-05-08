/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 01:36:55 by albaud            #+#    #+#             */
/*   Updated: 2022/11/02 10:34:01 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	
}

void Harl::debug(void)
{
	cout << "debug" << endl;
}
void Harl::info(void)
{
	cout << "info" << endl;
}
void Harl::warning(void)
{
	cout << "warning" << endl;
}
void Harl::error(void)
{
	cout << "error" << endl;
}


void Harl::complain(string level)
{
	void	(Harl::*complaint[])( void ) = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	string	levels[] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};

	for (int i = 0; i < 4; i++)
	{
		void (Harl::*selectedComplaint)( void ) = complaint[i];
		if (level == levels[i])
			(this->*selectedComplaint)();
	}
}

Harl::~Harl()
{

}
