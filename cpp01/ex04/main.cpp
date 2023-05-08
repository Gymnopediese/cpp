/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:58:09 by albaud            #+#    #+#             */
/*   Updated: 2022/11/02 00:42:28 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <strstream>
using namespace std;
#include <sstream>      // std::ostringstream

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		cout << "sed: usage: ./sed <filename> <to_replace> <replacement>" << endl;
		return (0);
	}
	std::ifstream	stream(argv[1]);
	string text;
	if(stream) {
		ostringstream ss;
		ss << stream.rdbuf(); // reading data
		text = ss.str();
	}
	else
		return (0);
	stream.close();
	while (1)
	{
		int index = text.find(argv[2]);
		if (index == -1)
			break;
		text.erase(index, strlen(argv[2]));
		text.insert(index, argv[3]);
	}
	string res = argv[1];
	res.append(".replace");
	ofstream	ostream(res);
	ostream << text;
	ostream.close();
}