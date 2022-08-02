/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:34:15 by cjad              #+#    #+#             */
/*   Updated: 2022/08/02 12:32:08 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void addContact(PhoneBook &PhoneBook, int *i)
{
	Contact  Contact;
	std::string str;
	std::cout << "Enter FirstName" << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		exit (1);
	if (str.empty())
	{
		std::cout << "FirstName is empty" << std::endl;
		return ;
	}
	else
		Contact.setFirstName(str);
	std::cout << "Enter LastName" << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		exit (1);
	if (str.empty())
	{
		std::cout << "LastName is empty" << std::endl;
		return ;
	}
	else
		Contact.setLastName(str);
	std::cout << "Enter NickName" << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		exit (1);
	if (str.empty())
	{
		std::cout << "NickName is empty" << std::endl;
		return ;
	}
	else
		Contact.setNickName(str);
	std::cout << "Enter PhoneNumber" << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		exit (1);
	if (str.empty())
	{
		std::cout << "PhoneNumber is empty" << std::endl;
		return ;
	}
	else
		Contact.setPhoneNumber(str);
	std::cout << "Enter DarkestSecret" << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		exit (1);
	if (str.empty())
	{
		std::cout << "DarkestSecret is empty" << std::endl;
		return ;
	}
	else
		Contact.setDarkestsecret(str);
	PhoneBook.add(Contact, i);
	(*i)++;
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
		if (std::cin.eof())
			exit (1);
		if (input.compare("ADD") == 0)
			addContact(PhoneBook, &i);
		else if (input.compare("SEARCH") == 0)
			search(PhoneBook);
		else if (input.compare("EXIT") == 0)
			break;
		else if (input[0] == '\0')
			exit(1);
		std::cout << "Enter your command (ADD, SEARCH OR EXIT)" << std::endl;
	}
}