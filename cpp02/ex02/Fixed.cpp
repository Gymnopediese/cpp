/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/03 18:09:50 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nb = 8;

Fixed::Fixed(void) : value(0)
{
	
}

Fixed::Fixed(const int num) : value(num << nb)
{
}

Fixed::Fixed(const float num)
{
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
	
}

Fixed&	Fixed::operator=(Fixed const& rsh)
{
	value = rsh.getRawBits();
	return (*this);
}

int	Fixed::operator>(Fixed const& rsh)
{
	if (value > rsh.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator<(Fixed const& rsh)
{
	if (value < rsh.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator>=(Fixed const& rsh)
{
	if (value >= rsh.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator<=(Fixed const& rsh)
{
	if (value <= rsh.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator==(Fixed const& rsh)
{
	if (value == rsh.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator!=(Fixed const& rsh)
{
	if (value != rsh.getRawBits())
		return (1);
	return (0);
}

Fixed	Fixed::operator+(Fixed const& rsh)
{
	return (Fixed(this->toFloat() + rsh.toFloat()));
}
Fixed	Fixed::operator-(Fixed const& rsh)
{
	return (Fixed(this->toFloat() - rsh.toFloat()));
}
Fixed	Fixed::operator*(Fixed const& rsh)
{
	return (Fixed(this->toFloat() * rsh.toFloat()));
}
Fixed	Fixed::operator/(Fixed const& rsh)
{
	return (Fixed(this->toFloat() / rsh.toFloat()));
}

Fixed&	Fixed::operator++(void)
{
	value++;
	return (*this);
}

Fixed	Fixed::operator++(int n)
{
	(void) n;
	Fixed temp = *this;
	value += 1;
	return (temp);
}

Fixed&	Fixed::operator--(void)
{
	value--;
	return (*this);
}

Fixed	Fixed::operator--(int n)
{
	(void) n;
	Fixed temp = *this;
	value -= 1;
	return (temp);
}
Fixed&	Fixed::operator+=(Fixed const& rsh)
{
	value += rsh.value;
	return (*this);
}
Fixed&	Fixed::operator-=(Fixed const& rsh)
{
	value -= rsh.value;
	return (*this);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return(a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return(b);
	return (a);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return(a);
	return (b);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return(b);
	return (a);
}

std::ostream&	operator<<(std::ostream &s, Fixed const &rhs)
{
	s << rhs.toFloat();
	return (s);
}

Fixed::Fixed(Fixed const &src)
{
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