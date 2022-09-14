/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 08:25:42 by cjad              #+#    #+#             */
/*   Updated: 2022/09/14 13:15:30 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <stdlib.h>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "H.hpp"

Base *generate()
{
	srand(time(NULL));
	int r = rand() % 3;
	if (r == 0)
		return new A;
	if (r == 1)
		return new B;
	return new C;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "this is a type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "this is a type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "this is a type C" << std::endl;
	else
		std::cerr << "this is not any of the A, B or C types" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &ptr = dynamic_cast<A&>(p);
		(void) ptr;
		std::cout << "this is a type A" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "this is not a type A" << std::endl;
	}
	try
	{
		B &ptr = dynamic_cast<B&>(p);
		(void) ptr;
		std::cout << "this is a type B" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "this is not a type B" << std::endl;
	}
	try
	{
		C &ptr = dynamic_cast<C&>(p);
		(void) ptr;
		std::cout << "this is a type C" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "this is not a type C" << std::endl;
	}
}

int main()
{
	Base *a = generate();
	Base *e = generate();
	Base *c = generate();
	Base *f = generate();
	H 	D;
	A	g;
	A &Rg = g;
	H &RD =D;
	
	identify(a);
	identify(RD);
	identify(Rg);
	identify(e);
	identify(c);
	identify(f);
}