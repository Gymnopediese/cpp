/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:16:15 by albaud            #+#    #+#             */
/*   Updated: 2022/11/15 13:18:35 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"

void print(int i)
{
	std::cout << i << std::endl;
}

int main()
{
	std::list<int> lst = {1, 2, 3};

	std::list<int> f = easyfind<std::list<int>>(lst, 2);

	for_each(f.begin(), f.end(), print);
}