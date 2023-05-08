 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:06:25 by albaud            #+#    #+#             */
/*   Updated: 2022/11/15 12:58:46 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
template <typename VAR>
VAR	easyfind(VAR, int i)
{
	std::List<int>::const_iterator start;
	std::List<int>::const_iterator end = VAR.end();
	
	for(start = VAR.begin(); start != end; start ++)
	{
		if (*start = i)
			return (start)
	}
	return (0);
}