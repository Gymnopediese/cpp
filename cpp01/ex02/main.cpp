/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:00:22 by albaud            #+#    #+#             */
/*   Updated: 2022/11/01 23:10:43 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
using namespace std;

int main()
{
	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringREF = str;

	cout << &str << endl;
	cout << stringPTR << endl;
	cout << &stringREF << endl;

	cout << str << endl;
	cout << *stringPTR << endl;
	cout << stringREF << endl;
}