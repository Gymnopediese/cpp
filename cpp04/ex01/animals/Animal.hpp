/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 14:00:48 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>
using namespace std;
#include "../others/Brain.hpp"

class Animal
{
private:

protected:
	std::string type;

public:
	Animal(void);
	Animal(Animal const &src);
	virtual ~Animal();
	
	virtual Animal&	operator=(Animal const& rsh);
	string	getType() const;
	virtual void	makeSound(void) const;
	virtual Brain	*getBrain( void ) const = 0;
};

#endif