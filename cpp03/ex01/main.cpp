/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:15:14 by albaud            #+#    #+#             */
/*   Updated: 2022/11/04 10:48:45 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap a = ClapTrap("joe", 10, 10, 5);
	ScavTrap b = ScavTrap("jojo");

	a.attack(b);
	b.attack(a);

	b.guardGate();
	b.beRepaired(100);
	a.beRepaired(10);
}