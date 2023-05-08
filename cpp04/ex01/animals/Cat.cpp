/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 14:01:24 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	cout << "It is a cat." << endl;
	brain = new Brain();
}

void	Cat::makeSound(void) const
{
	cout << "miou" << endl;
}

Brain	*Cat::getBrain(void) const
{
	return (brain);
}

Cat::Cat(Cat const &src)
{
	type = src.type;
	cout << "It is a cat." << endl;
	brain = new Brain();
	for (int i = 0; i < (int)src.brain->ideas->length(); i++)
	{
		brain->ideas[i] = src.brain->ideas[i];
	}
}

Cat::~Cat()
{
	cout << "A cat is dead." << endl;
	delete brain;
}

Cat&	Cat::operator=(Cat const& rsh)
{
	type = rsh.type;
	*brain = *rsh.brain;
	return (*this);
}
