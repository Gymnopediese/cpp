/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/03 10:07:21 by albaud           ###   ########.fr       */
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
	float			toFloat(void) const;
	int				toInt(void) const;
	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	Fixed&			operator=(Fixed const& rsh);
};

std::ostream&	operator<<(std::ostream &s, Fixed const &rhs);

#endif