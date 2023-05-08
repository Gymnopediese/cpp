/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:51:04 by albaud            #+#    #+#             */
/*   Updated: 2022/11/15 02:31:48 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_H
# define Array_H
# include <iostream>
using namespace std;

template <typename VAR>
class Array
{
private:
	const int	s;
	VAR 		*arr;
public:
	Array(void) : arr(new VAR()), s(0){}
	Array(unsigned int length) : s(length), arr(new VAR[length]){}
	Array(Array<VAR> const &src) : s(src.size())
	{
		arr = new VAR[src.size()];
		for (int i = 0; i < (int)src.size(); i++)
			arr[i] = src.arr[i];
	}
	~Array<VAR>(){
		delete [] arr;
	}
	class IndexOutOfTheRange : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("Array: Index out of the range");
		}
	};
	int	size(void) const
	{
		return (s);
	}
	Array<VAR>& operator=(Array<VAR> const& rsh)
	{
		delete arr;
		arr = new VAR[rsh.size()];
		for (int i = 0; i < (int)rsh.size(); i++)
			arr[i] = rsh.arr[i];
		return (*this);
	}
	VAR&	operator[](int index)
	{
		if (index < 0)
			index = s + (int)index;
		if (index < 0 || (int) index >= (int)s)
			throw Array<VAR>::IndexOutOfTheRange();
		return (arr[index]);
	}
};

#endif