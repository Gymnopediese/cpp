/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:27:31 by albaud            #+#    #+#             */
/*   Updated: 2022/11/15 02:34:10 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.cpp"
#include "Array.hpp"
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

#define TRY try{
#define CATCH }catch(std::exception& e){ std::cout << e.what() << std::endl;}

int main()
{
	Array<int> 		a(3);
	Array<int> 		a2(3);
	Array<double> 	b(3);
	Array<float>	c(3);
	Array<char> 	d(3);

	for (int i = 100; i < 103; i++)
	{
		a[i - 100] = i;
		a2[i - 100] = i * 10;
		b[i - 100] = i;
		c[i - 100] = i;
		d[i - 100] = i;
	}

	iter<int>(&a[0], 3, &pluss<int>);
	iter<double>(&b[0], 3, &pluss<double>);
	iter<float>(&c[0], 3, &pluss<float>);
	iter<char>(&d[0], 3, &pluss<char>);

	iter<int>(&a[0], 3, &print<int>);
	iter<double>(&b[0], 3, &print<double>);
	iter<float>(&c[0], 3, &print<float>);
	iter<char>(&d[0], 3, &print<char>);

	cout << "try accessing 3" << endl;
	TRY
		cout << a[3] << endl;
	CATCH
	cout << "try accessing -1 (python behaviour)" << endl;
	TRY
		cout << a[-1] << endl;
	CATCH
	cout << "try accessing -4 (python behaviour)" << endl;
	TRY
		cout << a[-4];
	CATCH

	a = a2;

	cout << "a = a2" << endl;
	iter<int>(&a[0], 3, &print<int>);
	iter<int>(&a[0], 3, &pluss<int>);
	cout << "iter plus a" << endl;
	iter<int>(&a[0], 3, &print<int>);
	cout << "a2 didnt changed" << endl;
	iter<int>(&a2[0], 3, &print<int>);
}