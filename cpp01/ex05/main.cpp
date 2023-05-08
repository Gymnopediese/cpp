/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 01:35:11 by albaud            #+#    #+#             */
/*   Updated: 2022/11/02 10:18:29 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl raleur = Harl();

	raleur.complain("DEBUG");
	raleur.complain("INFO");
	raleur.complain("WARNING");
	raleur.complain("ERROR");
}