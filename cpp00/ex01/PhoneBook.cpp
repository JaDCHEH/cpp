/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:32:58 by cjad              #+#    #+#             */
/*   Updated: 2022/08/02 12:32:29 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook Constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook Destructor called" << std::endl;
}

void PhoneBook::add(Contact &Contact, int *i)
{
	this->contact[(*i) % 8] = Contact;
}

void PhoneBook::printall(void)
{
	int	i;
	std::string index;

	i = 0;
	while (i < 8 && !this->contact[i].getFirstName().empty())
	{
		this->contact[i].printcolumn(i);
		i++;
	}
	std::cout << "Enter index" << std::endl;
	std::getline(std::cin, index);
	if (std::cin.eof())
		exit (1);
	if (!index.empty() && index.find_first_not_of("0123456789") == std::string::npos
		&& (atoi(index.c_str()) <= 8 && atoi(index.c_str()) > 0))
		this->contact[atoi(index.c_str()) - 1].printcontact();
	else if (index[0] == '\0')
		exit(1);
	else
		std::cout << "The index you entered is wrong" << std::endl;
}