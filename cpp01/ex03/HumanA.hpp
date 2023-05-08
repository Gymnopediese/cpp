/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:15:44 by albaud            #+#    #+#             */
/*   Updated: 2022/11/01 23:40:39 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA
# define HUMANA

#include <iostream>
#include "Weapon.hpp"
using namespace std;

class HumanA
{
private:
	Weapon &weapon;
	string name;
public:
	void	attack(void);
	void	setWeapon(Weapon &weapon);
			HumanA(string name, Weapon &weapon);
	~HumanA();
};

#endif