/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/04 10:49:21 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_H
# define SAMPLE_H
# include <iostream>
using namespace std;


class ClapTrap
{
protected:
	string	Name;
	int		Hit;
	int		Energy;
	int		Attack;
public:
	ClapTrap(void);
	ClapTrap(string name, int Hit = 10, int Energy = 10, int Attack = 0);
	ClapTrap(ClapTrap const &src);
	~ClapTrap();
	ClapTrap&	operator=(ClapTrap const& rsh);
	void		attack(const std::string& target);
	void		attack(ClapTrap& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	string		getname(void);
};


#endif