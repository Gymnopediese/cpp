/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 01:35:11 by albaud            #+#    #+#             */
/*   Updated: 2022/11/02 10:39:26 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		cout << "harl: usage: ./harl <minimal warning>";
		return (0);
	}
	Harl raleur = Harl(argv[1]);
	raleur.complain("DEBUG");
	raleur.complain("INFO");
	raleur.complain("WARNING");
	raleur.complain("ERROR");
}