/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:27:31 by albaud            #+#    #+#             */
/*   Updated: 2022/11/14 23:42:11 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.cpp"
#include <iostream>

template<typename T>
void pluss(T &n)
{
	n++;
}

template<typename PR>
void print(PR &n)
{
	std::cout << n << std::endl;
}

void plus(int &n)
{
	n++;
}

int main()
{
	int 	a[] = {1, 2, 3};
	double 	b[] = {1, 2, 3};
	float	c[] = {1, 2, 3};
	char 	d[] = {69, 67, 79};

	iter<int>(a, 3, &pluss<int>);
	iter<double>(b, 3, &pluss<double>);
	iter<float>(c, 3, &pluss<float>);
	iter<char>(d, 3, &pluss<char>);

	iter<int>(a, 3, &print<int>);
	iter<double>(b, 3, &print<double>);
	iter<float>(c, 3, &print<float>);
	iter<char>(d, 3, &print<char>);
	
}