/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:15:44 by albaud            #+#    #+#             */
/*   Updated: 2022/11/01 23:36:01 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL
# define HARL

#include <iostream>
using namespace std;

class Harl
{
private:
	int 	mini;
public:
	void complain(std::string level);
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	Harl(string mini);
	~Harl();
};

#endif