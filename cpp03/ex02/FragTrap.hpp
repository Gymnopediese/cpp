/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/04 11:00:31 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_h
# define FragTrap_h
# include <iostream>
using namespace std;
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap(void);
	FragTrap(string name, int Hit = 100, int Energy = 100, int Attack = 30);
	FragTrap(FragTrap const &src);
	void	attack(ClapTrap& target);
	void	attack(const std::string& target);
	~FragTrap();
	void 		highFivesGuys();
	FragTrap&	operator=(FragTrap const& rsh);
};

#endif