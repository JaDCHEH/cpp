/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:20:10 by cjad              #+#    #+#             */
/*   Updated: 2022/06/02 18:41:18 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	std::cout << "string memory :" << &string << std::endl;
	std::cout << "stringPTR memory :" << stringPTR << std::endl;
	std::cout << "stringREF memory :"<< &stringREF << std::endl;
	std::cout << "string :" << string << std::endl;
	std::cout << "stringPTR :" << *stringPTR << std::endl;
	std::cout << "stringREF :"<< stringREF << std::endl;
}