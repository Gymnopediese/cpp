/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 02:01:48 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include <iostream>
using namespace std;
#include "Animal.hpp"

class Animal;

class Dog : public Animal
{
private:

public:
	Dog(void);
	Dog(Dog const &src);
	~Dog();
	Dog&	operator=(Dog const& rsh);
	void	makeSound(void) const;
};

#endif