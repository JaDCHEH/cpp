/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:34:15 by cjad              #+#    #+#             */
/*   Updated: 2022/06/01 12:12:29 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

void addContact(PhoneBook &PhoneBook, int i)
{
	Contact  Contact;
	std::cout << "Enter FirstName" << std::endl;
	std::getline(std::cin, Contact.FirstName);
	std::cout << "Enter LastName" << std::endl;
	std::getline(std::cin, Contact.LastName);
	std::cout << "Enter NickName" << std::endl;
	std::getline(std::cin, Contact.NickName);
	std::cout << "Enter PhoneNumber" << std::endl;
	std::getline(std::cin, Contact.PhoneNumber);
	std::cout << "Enter DarkestSecret" << std::endl;
	std::getline(std::cin, Contact.Darkestsecret);
	if (Contact.FirstName.empty() || Contact.LastName.empty() || Contact.PhoneNumber.empty()
		|| Contact.Darkestsecret.empty() || Contact.NickName.empty())
	{
		std::cout << "One of the informations is empty" << std::endl;
		return ;
	}
	PhoneBook.add(Contact, i);
}

void search(PhoneBook &PhoneBook)
{	
	std::cout.width(11);
	std::cout << std::right << "index" << "|";
	std::cout.width(11);
	std::cout << std::right << "Firstname" << "|";
	std::cout.width(11);
	std::cout << std::right << "LastName" << "|";
	std::cout.width(11);
	std::cout << std::right << "Nickname" << std::endl;
	PhoneBook.printall();
}

int	main()
{
	std::string	input;
	PhoneBook	PhoneBook;
	int 		i;
	
	std::cout << "Enter your command (ADD, SEARCH OR EXIT)" << std::endl;
	i = 0;
	while(1)
	{
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
		{
			addContact(PhoneBook, i);
			i++;
		}
		else if (input.compare("SEARCH") == 0)
			search(PhoneBook);
		else if (input.compare("EXIT") == 0)
			break;
		std::cout << "Enter your command (ADD, SEARCH OR EXIT)" << std::endl;
	}
}