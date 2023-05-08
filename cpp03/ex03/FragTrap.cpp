/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/04 11:03:45 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	cout << "Clap trap new generation, even better than a Scavtrap and it is called a Scavtrap."<< endl;
}

FragTrap::FragTrap(string name, int Hit, int Energy, int Attack)
{
	cout << name << " is a Clap trap new generation, even better than a Scavtrap and it is called a Scavtrap."<< endl;
	Name = name;
	this->Hit = Hit;
	this->Energy = Energy;
	this->Attack = Attack;
}

FragTrap::FragTrap(FragTrap const &src)
{
	Name = src.Name;
	this->Hit = src.Hit;
	this->Energy = src.Energy;
	this->Attack = src.Attack;
}

FragTrap::~FragTrap()
{
	cout << Name << " is finaly dead." << endl;
}

void	FragTrap::attack(ClapTrap& target)
{
	if (Energy > 0 && Hit > 0)
	{
		Energy--;
		cout << "FragTrap " << Name;
		cout << " attacks " << target.getname();
		cout << " causing " << Attack;
		cout << " points of damage!" << endl;
		target.takeDamage(Attack);
		//TODO something
	}
}

void	FragTrap::attack(const std::string& target)
{
	if (Energy > 0 && Hit > 0)
	{
		Energy--;
		cout << "FragTrap " << Name;
		cout << " attacks " << target;
		cout << " causing " << Attack;
		cout << " points of damage!" << endl;
		//TODO something
	}
}

void	FragTrap::highFivesGuys()
{
	cout << Name << " the FragTrap want an high five, who's down?" << endl;
}

FragTrap&	FragTrap::operator=(FragTrap const& rsh)
{
	Name = rsh.Name;
	this->Hit = rsh.Hit;
	this->Energy = rsh.Energy;
	this->Attack = rsh.Attack;
	return (*this);
}
