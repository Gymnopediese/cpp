/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:11:35 by albaud            #+#    #+#             */
/*   Updated: 2022/11/01 22:54:06 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstring>

using namespace std;
#include "Zombie.hpp"

Zombie::Zombie(string name)
{
	this->name = name;
}

Zombie::Zombie(void)
{
	this->name = "";
}

Zombie::~Zombie()
{
	cout << name;
	cout << " is dead again" << endl;
}

void	Zombie::setName(string name)
{
	this->name = name;
}

void Zombie::announce( void )
{	
	if (name != "Foo")
		cout << "<";
	cout << name;
	if (name != "Foo")
		cout << ">";
	cout << ": BraiiiiiiinnnzzzZ..." << endl;
}
