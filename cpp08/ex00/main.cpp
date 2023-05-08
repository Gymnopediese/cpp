/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:16:15 by albaud            #+#    #+#             */
/*   Updated: 2022/11/15 14:15:15 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.cpp"

#include <vector>
void print(int i)
{
	std::cout << i << std::endl;
}

template <typename T>
void	tester()
{
	std::cout << "new test\n";
	T lst;
	for (int i = 0; i < 10; i++)
	{
		lst.push_back(i);
	}
	for_each(lst.begin(), lst.end(), print);
	typename T::const_iterator f = easyfind< T >(lst, 2);
	for(int i = 0; i < 8 ; i ++)
	{
		print(*f);
		f++;
	}
}

int main()
{
	tester<std::list<int> >();
	tester<std::vector<int> >();
}	