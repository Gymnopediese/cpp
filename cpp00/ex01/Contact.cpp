/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:18:15 by albaud            #+#    #+#             */
/*   Updated: 2022/10/31 18:18:25 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->name = "";
	this->lname = "";
	this->phone = "";
	this->pseudo = "";
	this->secret = "";
}

Contact::Contact(string name, string lname, string pseudo, string phone, string secret)
{
	this->name = name;
	this->lname = lname;
	this->phone = phone;
	this->pseudo = pseudo;
	this->secret = secret;
}

Contact::~Contact()
{
	
}