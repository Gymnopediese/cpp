/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/03 10:25:44 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nb = 8;

Fixed::Fixed(void) : value(0)
{
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const int num) : value(num << nb)
{
	cout << "Int constructor called" << endl;
}

Fixed::Fixed(const float num)
{
	cout << "Float constructor called" << endl;
	value = roundf(num * pow(2, nb));
}

int	Fixed::getRawBits(void) const
{
	return (value);
}

float	Fixed::toFloat(void) const
{
	return ((float)value / pow(2, nb));
}

int		Fixed::toInt(void) const
{
	return (value >> nb);
}


void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

Fixed&	Fixed::operator=(Fixed const& rsh)
{
	cout << "Copy assignment operator called" << endl;
	value = rsh.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream &s, Fixed const &rhs)
{
	s << rhs.toFloat();
	return (s);
}

Fixed::Fixed(Fixed const &src)
{
	cout << "Copy constructor called" << endl;
	this->value = src.getRawBits();
}

int		ft_pow(int val, int pow)
{
	int		i = 0;
	int		result;

	result = 1;
	while (i < pow)
	{
		result *= val;
		i++;
	}
	return (result);
}