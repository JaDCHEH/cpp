/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:27:47 by cjad              #+#    #+#             */
/*   Updated: 2022/08/01 12:14:21 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Contact Constructor called" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Contact Destructor called" << std::endl;
}

void Contact::setFirstName(std::string &str)
{
	this->FirstName = str;
}

std::string &Contact::getFirstName()
{
	return this->FirstName;
}

void Contact::setLastName(std::string &str)
{
	this->LastName = str;
}

std::string &Contact::getLastName()
{
	return this->LastName;
}

void Contact::setNickName(std::string &str)
{
	this->NickName = str;
}

std::string &Contact::getNickName()
{
	return this->NickName;
}

void Contact::setDarkestsecret(std::string &str)
{
	this->Darkestsecret = str;
}

std::string &Contact::getDarkestsecret()
{
	return this->Darkestsecret;
}

void Contact::setPhoneNumber(std::string &str)
{
	this->PhoneNumber = str;
}

std::string &Contact::getPhoneNumber()
{
	return this->PhoneNumber;
}


void	Contact::printcolumn(int i)
{
	std::string str;

	std::cout.width(11);
	std::cout << std::right << i + 1 << "|";
	std::cout.width(11);
	if (this->FirstName.size() > 10)
	{
		str = this ->FirstName.substr(0, 10);
		str[9] = '.';
		std::cout << std::right << str << "|";
	}
	else
		std::cout << std::right << this->FirstName << "|";
	std::cout.width(11);
	if (this->LastName.size() > 10)
	{
		str = this ->LastName.substr(0, 10);
		str[9] = '.';
		std::cout << std::right << str << "|";
	}
	else
		std::cout << std::right << this->LastName << "|";
	std::cout.width(11);
	if (this->NickName.size() > 10)
	{
		str = this ->NickName.substr(0, 10);
		str[9] = '.';
		std::cout << std::right << str << std::endl;
	}
	else
		std::cout << std::right << this->NickName << std::endl;
}

void Contact::printcontact(void)
{
	if (this->Darkestsecret.empty())
	{
		std::cout << "The index you entered is wrong" << std::endl;
		return ;
	}
	std::cout << "Firstname: " << this->FirstName << std::endl;
	std::cout << "Lastname: " << this->LastName << std::endl;
	std::cout << "Nickname: " << this->NickName << std::endl;
	std::cout << "Phonenumber: " << this->PhoneNumber << std::endl;
	std::cout << "Darkestsecret: " << this->Darkestsecret << std::endl;
}