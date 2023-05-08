/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 13:27:11 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
# include <iostream>
using namespace std;

Brain::Brain(void)
{
	cout << "It has a brain." << endl;
}

Brain::Brain(Brain const &src)
{
	for (int i = 0; i < (int)ideas->length(); i++)
	{
		ideas[i] = src.ideas[i];
	}
}

Brain::~Brain()
{
	cout << "Its brain stopped functioning." << endl;
}

Brain&	Brain::operator=(Brain const& rsh)
{
	(void) rsh;
	return (*this);
}
