/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/03 18:50:36 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_H
# define SAMPLE_H
# include <iostream>
using namespace std;
#include "Fixed.hpp"

class Point
{
private:
	Fixed	x;
	Fixed	y;
public:
	Point(void);
	Point(Point const &src);
	Point(const float a, const float b);
	~Point();
	Point&	operator=(Point const& rsh);
	Fixed&	gx(void);
	Fixed&	gy(void);
};

#endif