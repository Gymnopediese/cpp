/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 18:28:00 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_H
# define ShrubberyCreationForm_H
# include <iostream>
using namespace std;
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	string target;
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	~ShrubberyCreationForm();
	void	execute(Bureaucrat& b) const;
	ShrubberyCreationForm&	operator=(ShrubberyCreationForm const& rsh);
};

#endif