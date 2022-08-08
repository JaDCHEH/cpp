/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:58:28 by cjad              #+#    #+#             */
/*   Updated: 2022/08/08 14:24:37 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat bureau("Jad", 9);
	Form form("Game", 10, 20);
	Form form2("Life", 1, 2);
	
	std::cout << bureau << std::endl;
	std::cout << form << std::endl;
	std::cout << form2 << std::endl;
	bureau.SignForm(form);
	std::cout << form << std::endl;
	bureau.SignForm(form2);
	std::cout << form2 << std::endl;
}