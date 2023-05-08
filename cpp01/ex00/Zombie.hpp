/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:11:35 by albaud            #+#    #+#             */
/*   Updated: 2022/11/01 20:42:02 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
class Zombie
{
private:
	string name;
public:
	void announce(void);
	Zombie(string name);
	~Zombie();
};

#endif
