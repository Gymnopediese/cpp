/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:44:16 by albaud            #+#    #+#             */
/*   Updated: 2022/11/01 22:54:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *res;
	
	res = new Zombie[N];
	for (I_IN_RANGE N DO)
		res[i].setName(name);
	return (res);
}
