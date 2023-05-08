/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:15:14 by albaud            #+#    #+#             */
/*   Updated: 2022/11/03 19:28:40 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a = ClapTrap("joe");
	ClapTrap b = ClapTrap("joseph", 10, 10, 5);

	a.attack(b);
	b.attack(a);

	a.beRepaired(10);
}