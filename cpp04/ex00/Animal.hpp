/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 13:07:36 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>
using namespace std;


class Animal
{
private:

protected:
	std::string type;

public:
	Animal(void);
	Animal(Animal const &src);
	virtual ~Animal();
	
	Animal&	operator=(Animal const& rsh);
	string	getType() const;
	virtual void	makeSound(void) const;
};

#endif