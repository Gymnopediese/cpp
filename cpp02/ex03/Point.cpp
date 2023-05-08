/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/03 21:55:38 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
}

Point::Point(Point const &src) : x(src.x), y(src.y)
{
}

Point::Point(const float a, const float b) : x(a), y(b)
{
}

Point::~Point()
{
}

Point&	Point::operator=(Point const& rsh) 
{
	x = rsh.x;
	y = rsh.y;
	return (*this);
}

Fixed	&Point::gx(void)
{
	return (x);
}
Fixed	&Point::gy(void)
{
	return (y);
}
