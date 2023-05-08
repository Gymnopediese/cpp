/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/15 01:10:01 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array<VAR>(void) : arr(new VAR()), s(0)
{

}

Array::Array<VAR>(unsigned int length) : arr(new VAR[length]), s(length)
{
	
}

Array::Array<VAR>(Array<VAR> const &src) : s(src.size())
{
	arr = new VAR[src.size()];
	for (int i = 0; i < (int)src.size(); i++)
		arr[i] = src.arr[i];
}

Array<VAR>::~Array()
{
	delete [] arr;
}

int	Array<VAR>::size(void)
{
	return (s);
}

Array<VAR>&	Array<VAR>::operator=(Array<VAR> const& rsh)
{
	delete arr;
	arr = new VAR[rsh.size()];
	for (int i = 0; i < (int)rsh.size(); i++)
		arr[i] = rsh.arr[i];
}

VAR&	Array<VAR>::operator[](unsigned int index)
{
	if (index < 0)
		index = s - index;
	if (index < 0 || index >= s)
		throw Array<VAR>::IndexOutOfTheRange();
	return (arr[index]);
}