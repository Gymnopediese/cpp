/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 21:59:29 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_H
# define Intern_H
# include <iostream>
using namespace std;

#include "Form.hpp"
class Intern
{
private:

public:
	Intern(void);
	Intern(Intern const &src);
	Form*	makeForm(string name, string target) const;
	~Intern();
	Intern&	operator=(Intern const& rsh);
};

#endif