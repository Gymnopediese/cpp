/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:15:44 by albaud            #+#    #+#             */
/*   Updated: 2022/11/01 23:55:44 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB
# define HUMANB

#include <iostream>
#include "Weapon.hpp"
using namespace std;

class HumanB
{
private:
	Weapon *weapon;
	string name;
public:
	void	attack(void);
			HumanB(string name);
	void	setWeapon(Weapon &weapon);
	~HumanB();
};

#endif