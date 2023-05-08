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
typename VAR::const_iterator	easyfind(VAR container, int i)
{
	typename VAR::const_iterator start;
	typename VAR::const_iterator end = container.end();
	
	for(start = container.begin(); start != end; start ++)
	{
		// std::cout << *start << std::endl;
		if (*start == i)
			return (start);
	}
	throw std::exception();
}