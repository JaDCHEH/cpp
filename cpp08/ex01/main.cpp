/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:25:12 by cjad              #+#    #+#             */
/*   Updated: 2022/08/06 17:48:02 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	int	ints[] = { 42, 54, 957, 432, 1234, 0, 754, 16576 , 4645, 15, 874894 , 4564, 1465, 11};
	size_t ints_size( sizeof(ints) / sizeof(int) );
	std::vector<int> v(ints, ints + ints_size);
	Span s(14);
	Span s1(13);
	try
	{
		s.addnumber(v.begin(),v.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	s.ShortestSpan();
	s.longestSpan();
	try
	{
		s1.addnumber(v.begin(),v.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}