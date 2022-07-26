/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 08:25:42 by cjad              #+#    #+#             */
/*   Updated: 2022/07/26 09:05:52 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <stdlib.h>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate()
{
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
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	identify(&p);
}

int main()
{
	Base *A = generate();
	Base *E = generate();
	Base *C = generate();
	Base *H = generate();

	identify(A);
	identify(E);
	identify(C);
	identify(H);
}