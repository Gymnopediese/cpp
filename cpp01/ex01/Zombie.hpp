/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:11:35 by albaud            #+#    #+#             */
/*   Updated: 2022/11/01 22:52:26 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

#define I_IN_RANGE int i = 0; i <
#define DO ; i++

class Zombie
{
private:
	string name;
public:
	void	announce(void);
	Zombie(void);
	Zombie(string name);
	~Zombie();
	void	setName(string name);
};

#endif
