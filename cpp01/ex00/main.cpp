/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:38:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/01 20:42:16 by albaud           ###   ########.fr       */
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

int	main(void)
{
	Zombie *m = newZombie("jesus");
	m->announce();
	randomChump("albert");
	delete m;
}