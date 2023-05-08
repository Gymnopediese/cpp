/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:09:58 by albaud            #+#    #+#             */
/*   Updated: 2022/11/14 22:14:22 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct s_data
{
	int			age;
	std::string name;
	bool		sexe;
} Data;

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

void	printData(Data* data)
{
	std::string a = data->sexe ? " male." : " female.";
	std::cout << data->name << " is a " << data->age << a << std::endl;
}

int main()
{
	Data* 		data = new Data;
	uintptr_t 	s;
	
	data->name = "jesus";
	data->age = 33;
	data->sexe = true;

	printData(data);
	std::cout << "data pointer\t\t= " << data << std::endl;
	s = serialize(data);
	std::cout << std::hex << "serialized pointer\t= 0x" << s << std::endl;
	data = deserialize(s);
	std::cout << std::dec << "deserialized pointer\t= " << data << std::endl;
	printData(data);

	delete data;
}