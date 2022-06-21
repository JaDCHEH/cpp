/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:58:28 by cjad              #+#    #+#             */
/*   Updated: 2022/06/20 16:04:43 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bureau("Jad", 1);
	Bureaucrat bureau2("yal3ab", 0);
	Bureaucrat bureau3("yal3", 1444);
	
	std::cout << bureau << std::endl;
	bureau.incrementGrade();
	std::cout << bureau << std::endl;
	bureau.decrementGrade();
	std::cout << bureau << std::endl;
}