/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:11:35 by albaud            #+#    #+#             */
/*   Updated: 2022/10/31 18:19:08 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
class Contact
{
public:
	string	name;
	string	lname;
	string	pseudo;
	string	phone;
	string	secret;
	Contact(void);
	Contact(string name, string lname, string pseudo, string phone, string secret);
	~Contact();
};

#endif
