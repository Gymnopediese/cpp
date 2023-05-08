/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/13 18:28:00 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_H
# define RobotomyRequestForm_H
# include <iostream>
using namespace std;
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	string target;
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(string target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	~RobotomyRequestForm();
	void	execute(Bureaucrat& b) const;
	RobotomyRequestForm&	operator=(RobotomyRequestForm const& rsh);
};

#endif