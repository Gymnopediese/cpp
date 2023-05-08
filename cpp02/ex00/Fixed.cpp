/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/03 01:30:06 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nb = 8;

Fixed::Fixed(void) : value(0)
{
	cout << "Default constructor called" << endl;
}

int	Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called" << endl;
	return (value);
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

Fixed::Fixed(Fixed const &src)
{
	cout << "Copy constructor called" << endl;
	this->value = src.getRawBits();
}
