/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/03 00:25:52 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>
using namespace std;


class Fixed
{
private:
	int	value;
	static const int nb;
public:
	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed&	operator=(Fixed const& rsh);
};

#endif