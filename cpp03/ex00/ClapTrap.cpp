/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/03 19:28:06 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : Name(""), Hit(10), Energy(10), Attack(0)
{
	cout << "A new clap trap is born." << endl;
}

ClapTrap::ClapTrap(string name, int Hit, int Energy, int Attack) : Name(name), Hit(Hit), Energy(Energy), Attack(Attack)
{
	cout << "A new clap trap is born." << endl;
}

void		ClapTrap::attack(ClapTrap& target)
{
	if (Energy > 0 && Hit > 0)
	{
		Energy--;
		cout << "ClapTrap " << Name;
		cout << " attacks " << target.Name;
		cout << " causing " << Attack;
		cout << " points of damage!" << endl;
		target.takeDamage(Attack);
		//TODO something
	}
}

void	ClapTrap::attack(const std::string& target)
{
	if (Energy > 0 && Hit > 0)
	{
		Energy--;
		cout << "ClapTrap " << Name;
		cout << " attacks " << target;
		cout << " causing " << Attack;
		cout << " points of damage!" << endl;
		//TODO something
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	cout << "Took " << amount << " dammages." << endl;
	Hit -= amount;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	cout << "Repared " << amount << " dammages." << endl;
	if (Energy > 0 && Hit > 0)
	{
		Energy--;
		Hit += amount;
	}
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	this->Name = src.Name;
	this->Hit = src.Hit;
	this->Energy = src.Energy;
	this->Attack = src.Attack;
}

ClapTrap::~ClapTrap()
{
	cout << this->Name << " is dead." << endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& rsh)
{
	this->Name = rsh.Name;
	this->Hit = rsh.Hit;
	this->Energy = rsh.Energy;
	this->Attack = rsh.Attack;
	return (*this);
}
