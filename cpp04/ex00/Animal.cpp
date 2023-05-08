/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 13:09:13 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	cout << "A new animal is born." << endl;
}

void Animal::makeSound(void) const
{
	cout << "** unknown animal sound **" << endl;
}

Animal::Animal(Animal const &src)
{
	type = src.type;
	cout << "A new animal is born." << endl;
}

Animal::~Animal()
{
	cout << "It was a great animal." << endl;
}

string	Animal::getType() const
{
	return (type);
}

Animal&	Animal::operator=(Animal const& rsh)
{
	type = rsh.type;
	return (*this);
}
