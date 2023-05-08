/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 13:50:57 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include <iostream>
using namespace std;
#include "Animal.hpp"
#include "../others/Brain.hpp"
class Animal;

class Dog : public Animal
{
private:
	Brain* brain;
public:
	Dog(void);
	Dog(Dog const &src);
	~Dog();
	Dog&	operator=(Dog const& rsh);
	void	makeSound(void) const;
	Brain	*getBrain(void) const;
};

#endif