/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 18:28:00 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_H
# define PresidentialPardonForm_H
# include <iostream>
using namespace std;
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	string target;
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(string target);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	~PresidentialPardonForm();
	void	execute(Bureaucrat& b) const;
	PresidentialPardonForm&	operator=(PresidentialPardonForm const& rsh);
};

#endif