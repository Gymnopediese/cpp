/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 02:02:33 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	cout << "A fake animal is born." << endl;
}

void WrongAnimal::makeSound(void) const
{
	cout << "** unknown animal sound **" << endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	type = src.type;
	cout << "A fake animal is born." << endl;
}

WrongAnimal::~WrongAnimal()
{
	cout << "It was a fake animal." << endl;
}

string	WrongAnimal::getType() const
{
	return (type);
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& rsh)
{
	type = rsh.type;
	return (*this);
}
