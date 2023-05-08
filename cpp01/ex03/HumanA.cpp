/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:23:18 by albaud            #+#    #+#             */
/*   Updated: 2022/11/01 23:47:13 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}

void	HumanA::attack(void)
{
	cout << name << " attacks with their " << weapon.getType() << endl;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = weapon;
}

HumanA::~HumanA()
{
	
}
