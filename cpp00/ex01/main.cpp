/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:59:00 by albaud            #+#    #+#             */
/*   Updated: 2022/10/31 18:11:54 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	PhoneBook	book;
	string		str;
	while (1)
	{
		cin >> str;
		if (str == "ADD")
			book.add();
		else if (str == "SEARCH")
			book.search();
		else if (str == "EXIT")
			return (0);
		else
			cout << "invalid command" << endl;
	}
}