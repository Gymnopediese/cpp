/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:18:36 by albaud            #+#    #+#             */
/*   Updated: 2022/11/01 23:34:31 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type = "";
}

Weapon::Weapon(string type)
{
	this->type = type;
}

string	&Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(string type)
{
	this->type = type;
}

Weapon::~Weapon()
{

}