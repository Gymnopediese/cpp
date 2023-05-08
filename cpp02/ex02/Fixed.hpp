/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/03 17:56:40 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>
using namespace std;


class Fixed
{
private:
	int	value;
	static const int nb;
public:
	Fixed(void);
	Fixed(const int num);
	Fixed(const float num);
	Fixed(Fixed const &src);
	~Fixed();
	float				toFloat(void) const;
	int					toInt(void) const;
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	Fixed&				operator=(Fixed const& rsh);
	int					operator>(Fixed const& rsh);
	int					operator<(Fixed const& rsh);
	int					operator>=(Fixed const& rsh);
	int					operator<=(Fixed const& rsh);
	int					operator==(Fixed const& rsh);
	int					operator!=(Fixed const& rsh);
	Fixed				operator+(Fixed const& rsh);
	Fixed				operator-(Fixed const& rsh);
	Fixed				operator*(Fixed const& rsh);
	Fixed				operator/(Fixed const& rsh);
	Fixed&				operator++(void);
	Fixed				operator++(int n);
	Fixed&				operator--(void);
	Fixed				operator--(int n);
	Fixed&				operator+=(Fixed const& rsh);
	Fixed&				operator-=(Fixed const& rsh);
	static Fixed		&min(Fixed &a, Fixed &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream&	operator<<(std::ostream &s, Fixed const &rhs);

#endif