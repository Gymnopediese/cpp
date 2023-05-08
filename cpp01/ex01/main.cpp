/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:38:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/01 22:58:56 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	return (new Zombie(name));
}

void randomChump( std::string name )
{
	Zombie res = Zombie(name);
	res.announce();
}

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie *m = newZombie("jesus");
	m->announce();
	randomChump("albert");

	delete m;
	Zombie *horde = zombieHorde(10, "jesus");
	for(I_IN_RANGE 10 DO)
		horde[i].announce();
	delete [] horde;
}