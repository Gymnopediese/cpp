/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 14:00:51 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include <iostream>
using namespace std;
#include "../others/Brain.hpp"

#include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain* brain;
public:
	Cat(void);
	Cat(Cat const &src);
	~Cat();
	Cat&	operator=(Cat const& rsh);
	void	makeSound(void) const;
	Brain	*getBrain(void) const;
};

#endif