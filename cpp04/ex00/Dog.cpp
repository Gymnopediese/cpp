/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 13:03:30 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	cout << "It is a dog." << endl;
}

void Dog::makeSound(void) const
{
	cout << "wouaff" << endl;
}

Dog::Dog(Dog const &src)
{
	type = src.type;
	cout << "It is a dog." << endl;
}

Dog::~Dog()
{
	cout << "A dog is dead." << endl;
}

Dog&	Dog::operator=(Dog const& rsh)
{
	type = rsh.type;
	return (*this);
}
