/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:52:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/15 02:21:10 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// template <typename VAR>
// Array<VAR>::Array(void) : arr(new VAR()), s(0)
// {

// }

// template <typename VAR>
// Array<VAR>::Array(unsigned int length) : arr(new VAR[length]), s(length)
// {
	
// }

// template <typename VAR>
// Array<VAR>::Array(Array<VAR> const &src) : s(src.size())
// {
// 	arr = new VAR[src.size()];
// 	for (int i = 0; i < (int)src.size(); i++)
// 		arr[i] = src.arr[i];
// }

// template <typename VAR>
// Array<VAR>::~Array<VAR>()
// {
// 	delete [] arr;
// }

// template <typename VAR>
// int	Array<VAR>::size(void)
// {
// 	return (s);
// }

// template <typename VAR>
// Array<VAR>&	Array<VAR>::operator=(Array<VAR> const& rsh)
// {
// 	delete arr;
// 	arr = new VAR[rsh.size()];
// 	for (int i = 0; i < (int)rsh.size(); i++)
// 		arr[i] = rsh.arr[i];
// }

// template <typename VAR>
// VAR&	Array<VAR>::operator[](unsigned int index)
// {
// 	if (index < 0)
// 		index = s - index;
// 	if (index < 0 || index >= s)
// 		throw Array<VAR>::IndexOutOfTheRange();
// 	return (arr[index]);
// }