/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:09:58 by albaud            #+#    #+#             */
/*   Updated: 2022/11/14 22:44:45 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>   
#include <stdlib.h>    
#include <time.h>     

class Base
{
public:
	virtual ~Base(){};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};
Base *generate(void)
{
	int random = rand() % 3;

	if (random == 0)
	{
		std::cout << "Expected: A" << std::endl;
		return new A();
	}
	else if (random == 1)
	{
		std::cout << "Expected: B" << std::endl;
		return new B();
	}
	else 
	{
		std::cout << "Expected: C" << std::endl;
		return new C();
	}
}



void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Type is A" << std::endl;
	}catch(std::exception& e){}
	try
	{
		B &a = dynamic_cast<B &>(p);
		(void)a;
		std::cout << "Type is B" << std::endl;
	}catch(std::exception& e){}
	try
	{
		C &a = dynamic_cast<C &>(p);
		(void)a;
		std::cout << "Type is C" << std::endl;
	}catch(std::exception& e){}
}

void identify(Base* p)
{
	// try
	// {
	// 	B *a = *dynamic_cast<A *>(p);
	// 	std::cout << "Type is A" << std::endl;
	// }catch(std::exception& e){}
	// try
	// {
	// 	p = dynamic_cast<A *>(p);
	// 	std::cout << "Type is B" << std::endl;
	// }catch(std::exception& e){}
	// try
	// {
	// 	p = dynamic_cast<A *>(p);
	// 	std::cout << "Type is C" << std::endl;
	// }catch(std::exception& e){}
	identify(*p);

}

#define TEST 100

int main ()
{
	Base *base;
  	srand (time(NULL));

	for (int i = 0; i < TEST; i++)
	{
		std::cout << "test " << i + 1 << std::endl;
		base = generate();
		identify(base);
		identify(*base);
		delete base;
	}
}