/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 13:58:42 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	cout << "It is a dog." << endl;
	brain = new Brain();
}

void Dog::makeSound(void) const
{
	cout << "wouaff" << endl;
}

Dog::Dog(Dog const &src)
{
	type = src.type;
	cout << "It is a dog." << endl;
	brain = new Brain();
	for (int i = 0; i < (int)src.brain->ideas->length(); i++)
	{
		brain->ideas[i] = src.brain->ideas[i];
	}
}

Brain	*Dog::getBrain(void) const
{
	return (brain);
}

Dog::~Dog()
{
	cout << "A dog is dead." << endl;
	delete brain;
}

Dog&	Dog::operator=(Dog const& rsh)
{
	cout << "bruh"<<endl;
	type = rsh.type;
	for (int i = 0; i < (int)rsh.brain->ideas->length(); i++)
	{
		brain->ideas[i] = rsh.brain->ideas[i];
	}
	return (*this);
}
