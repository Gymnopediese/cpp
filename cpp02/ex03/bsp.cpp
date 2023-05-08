/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:28:21 by albaud            #+#    #+#             */
/*   Updated: 2022/11/03 22:06:27 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>
using namespace std;

bool inbox(Point a, Point b, Point c, Point point)
{
	if (point.gx() <= a.gx() && point.gx() <= b.gx() && point.gx() <= c.gx())
		return (false);
	if (point.gx() >= a.gx() && point.gx() >= b.gx() && point.gx() >= c.gx())
		return (false);
	if (point.gy() <= a.gy() && point.gy() <= b.gy() && point.gy() <= c.gy())
		return (false);
	if (point.gy() >= a.gy() && point.gy() >= b.gy() && point.gy() >= c.gy())
		return (false);
	return (true);
}

Fixed	det(Point a, Point b)
{
	return (Fixed((a.gx() * b.gy()) - (a.gy() * b.gx())));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (!inbox(a, b, c, point))
		return (false);
	Point	aa = a;
	Point	bb = b;
	Point	cc = c;

	Point	v0 = a;
	Point	v1 = Point(bb.gx().toFloat() - aa.gx().toFloat(), bb.gy().toFloat() - aa.gy().toFloat());
	Point	v2 = Point(cc.gx().toFloat() - aa.gx().toFloat(), cc.gy().toFloat() - aa.gy().toFloat());

	Fixed	A = Fixed((det(point, v2) - det(v0, v2)) / det(v1, v2));
	Fixed	B = Fixed((det(point, v1) - det(v0, v1)) / det(v1, v2));

	float	aabs = fabs(A.toFloat());
	float	babs = fabs(B.toFloat());
	//cout << A << " " << B << endl;
	if (aabs > 0 and babs > 0 and aabs + babs < 1)
		return (true);
	return (false);
}