/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/05 21:47:58 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	cout << "Clap trap new generation, called a Scavtrap."<< endl;
}

DiamondTrap::DiamondTrap(string name, int Hit, int Energy, int Attack)
{
	cout << name << " is a Clap trap new generation, called a Scavtrap."<< endl;
	Name = name;
	this->Hit = Hit;
	this->Energy = Energy;
	this->Attack = Attack;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	Name = src.Name;
	this->Hit = src.Hit;
	this->Energy = src.Energy;
	this->Attack = src.Attack;
}

DiamondTrap::~DiamondTrap()
{
	cout << Name << " is finaly dead." << endl;
}

void	DiamondTrap::attack(ClapTrap& target)
{
	if (Energy > 0 && Hit > 0)
	{
		Energy--;
		cout << "ScavTrap " << Name;
		cout << " attacks " << target.getname();
		cout << " causing " << Attack;
		cout << " points of damage!" << endl;
		target.takeDamage(Attack);
		//TODO something
	}
}

void	DiamondTrap::attack(const std::string& target)
{
	if (Energy > 0 && Hit > 0)
	{
		Energy--;
		cout << "ScavTrap " << Name;
		cout << " attacks " << target;
		cout << " causing " << Attack;
		cout << " points of damage!" << endl;
		//TODO something
	}
}

void	DiamondTrap::guardGate()
{
	cout << Name << " is entering Gate Keeper mode..." << endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& rsh)
{
	Name = rsh.Name;
	this->Hit = rsh.Hit;
	this->Energy = rsh.Energy;
	this->Attack = rsh.Attack;
	return (*this);
}
