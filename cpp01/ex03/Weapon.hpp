/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:15:44 by albaud            #+#    #+#             */
/*   Updated: 2022/11/01 23:36:01 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
# define WEAPON

#include <iostream>
using namespace std;

class Weapon
{
private:
	string type;
public:
	string	&getType();
	void	setType(string type);
	Weapon(void);
	Weapon(string type);
	~Weapon();
};

#endif