/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 01:36:55 by albaud            #+#    #+#             */
/*   Updated: 2022/11/02 10:38:27 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(string mini)
{
	string	levels[] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};
	this->mini = 0;
	for (int i = 0; i < 4; i++)
	{
		if (mini == levels[i])
			this->mini = i;
	}
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

	for (int i = this->mini; i < 4; i++)
	{
		void (Harl::*selectedComplaint)( void ) = complaint[i];
		if (level == levels[i])
			(this->*selectedComplaint)();
	}
}

Harl::~Harl()
{

}
