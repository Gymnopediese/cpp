/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:19:39 by albaud            #+#    #+#             */
/*   Updated: 2022/11/01 19:24:10 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

PhoneBook::PhoneBook(void)
{
	last_contact = 0;
}

string	ask(string word)
{
	string	res;

	cout << word << endl;
	do
	{
		cin >> res;
	}
	while (res[0] == 0);
	return (res);
}

long	ask_num(string word)
{
	long	res;

	do
	{
		cout << word << endl;
		cin >> res;
	}
	while (res < 0 || res > 7);
	return (res);
}

void	PhoneBook::add(void)
{
	string	a;
	string	b;
	string	c;
	string	d;
	string	e;

	a = ask("firstname :");
	b = ask("lastname :");
	c = ask("username :");
	d = ask("phone :");
	e = ask("secret :");
	contacts[last_contact] = Contact(a, b, c, d, e);
	last_contact++;
	if (last_contact == 8)
		last_contact = 0;
}

void	putstrclean(string	str)
{
 	long i = 0;
	for (; i < (int)(10 - str.length()); i++)
		putchar(' ');
	for (i = 0; i < (int)str.length(); i++)
	{
		if (i == 9)
		{
			putchar('.');
			break;
		}
		else
			putchar(str[i]);
	}
}

void	PhoneBook::search(void)
{
	long index = ask_num("contact index please: ");
	
	putstrclean(contacts[index].name);
	putchar('|');
	putstrclean(contacts[index].lname);
	putchar('|');
	putstrclean(contacts[index].pseudo);
	putchar('|');
	putstrclean(contacts[index].phone);
	putchar('\n');
}



PhoneBook::~PhoneBook()
{
}