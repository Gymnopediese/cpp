/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 13:00:04 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include <iostream>
using namespace std;


#include "Animal.hpp"

class Cat : public Animal
{
private:

public:
	Cat(void);
	Cat(Cat const &src);
	~Cat();
	Cat&	operator=(Cat const& rsh);
	void	makeSound(void) const;
};

#endif