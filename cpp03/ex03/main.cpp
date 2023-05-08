/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:15:14 by albaud            #+#    #+#             */
/*   Updated: 2022/11/04 11:02:30 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap a = ClapTrap("joe", 10, 10, 5);
	ScavTrap b = ScavTrap("jojo");
	FragTrap c = FragTrap("jonathan");

	a.attack(b);
	b.attack(a);
	c.attack(b);
	b.attack(c);


	b.guardGate();
	b.beRepaired(100);
	a.beRepaired(10);
	c.highFivesGuys();
}