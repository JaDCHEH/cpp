/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:58:28 by cjad              #+#    #+#             */
/*   Updated: 2022/09/12 12:29:03 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bureau("Jad", 1);
	try
	{
		Bureaucrat bureau2("yal3ab", 150);
		bureau2.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat bureau3("yal3", 1444);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	std::cout << bureau << std::endl;
	try
	{
		bureau.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << bureau << std::endl;
	bureau.decrementGrade();
	std::cout << bureau << std::endl;
}