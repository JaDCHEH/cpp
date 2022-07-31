/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:20:08 by cjad              #+#    #+#             */
/*   Updated: 2022/07/31 12:21:58 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>

class Contact
{
private:
	std::string	PhoneNumber;
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	Darkestsecret;

public:
	void printcolumn(int i);
	void printcontact(void);
	void setFirstName(std::string &str);
	std::string &getFirstName();
	void setLastName(std::string &str);
	std::string &getLastName();
	void setNickName(std::string &str);
	std::string &getNickName();
	void setDarkestsecret(std::string &str);
	std::string &getDarkestsecret();
	void setPhoneNumber(std::string &str);
	std::string &getPhoneNumber();
	Contact();
	~Contact();
};

#endif