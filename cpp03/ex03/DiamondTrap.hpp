/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/04 11:20:09 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DiamondTrap_h
# define DiamondTrap_h
# include <iostream>
using namespace std;
#include "ClapTrap.hpp"

class DiamondTrap : public ClapTrap
{
private:
	string name;
public:
	DiamondTrap(void);
	DiamondTrap(string name, int Hit = 100, int Energy = 100, int Attack = 20);
	DiamondTrap(DiamondTrap const &src);
	void	attack(ClapTrap& target);
	void	attack(const std::string& target);
	~DiamondTrap();
	void 		guardGate();
	DiamondTrap&	operator=(DiamondTrap const& rsh);
};

#endif