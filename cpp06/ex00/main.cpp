/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:20:17 by albaud            #+#    #+#             */
/*   Updated: 2022/11/14 15:30:27 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>


void	errors(std::string error, std::string num)
{
	if (error == "stod: out of range")
	{
		std::cout << "char:\timpossible" << std::endl;
		std::cout << "int:\timpossible" << std::endl;
		if (num[0] == '-')
		{
			std::cout << "float:\t-inff" << std::endl;
			std::cout << "double:\t-inf" << std::endl;
		}
		else
		{
			std::cout << "float:\tinff" << std::endl;
			std::cout << "double:\tinf" << std::endl;
		}
	}
	else
	{
		std::cout << "char:\timpossible" << std::endl;
		std::cout << "int:\timpossible" << std::endl;
		std::cout << "float:\tnanf" << std::endl;
		std::cout << "double:\tnan" << std::endl;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "usage: ./convert <num>\n";
		return (0);
	}
	const double num;
	try
		{num = std::stod(argv[1]);}
	catch(std::exception& e)
		{errors(e.what(), argv[1]);
		std::cout << e.what() << std::endl;
		return (0);}
	const char c = (char) num;
	const int i = (int) num;
	const float f = (float) num;
	
	std::cout << "char:\t";
	if (num < 32 || num > 126)
		std::cout << "non imprimable" << std::endl;
	else
		std::cout << "'" << c << "'" << std::endl;
	std::cout << "int:\t";
	if (num > INT_MAX || num < INT_MIN)
		std::cout << "non imprimable" << std::endl;
	else
		std::cout << i << std::endl;
	if ((float) i == f)
	{
		std::cout << "float:\t";
		std::cout << f << ".0f" << std::endl;
	}
	else
	{
		std::cout << "float:\t";
		std::cout << f << "f" << std::endl;
	}
	if ((double) i == num)
	{
		std::cout << "double:\t";
		std::cout << num << ".0" << std::endl;
	}
	else
	{
		std::cout << "double:\t";
		std::cout << num << std::endl;
	}
}