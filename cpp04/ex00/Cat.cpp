/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 13:09:07 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	cout << "It is a cat." << endl;
}

void	Cat::makeSound(void) const
{
	cout << "miou" << endl;
}

Cat::Cat(Cat const &src)
{
	type = src.type;
	cout << "It is a cat." << endl;
}

Cat::~Cat()
{
	cout << "A cat is dead." << endl;
}

Cat&	Cat::operator=(Cat const& rsh)
{
	type = rsh.type;
	return (*this);
}
