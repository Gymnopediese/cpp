/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/04 10:53:25 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_h
# define ScavTrap_h
# include <iostream>
using namespace std;
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap(void);
	ScavTrap(string name, int Hit = 100, int Energy = 100, int Attack = 20);
	ScavTrap(ScavTrap const &src);
	void	attack(ClapTrap& target);
	void	attack(const std::string& target);
	~ScavTrap();
	void 		guardGate();
	ScavTrap&	operator=(ScavTrap const& rsh);
};

#endif