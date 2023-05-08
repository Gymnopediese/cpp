/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 02:02:00 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	cout << "It is a.. a... a cat?" << endl;
}

void	WrongCat::makeSound(void) const
{
	cout << "fake miou" << endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	type = src.type; 
}

WrongCat::~WrongCat()
{
	cout << "the \"cat\" is dead." << endl;
}

WrongCat&	WrongCat::operator=(WrongCat const& rsh)
{
	type = rsh.type;
	return (*this);
}
