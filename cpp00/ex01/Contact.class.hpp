/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:20:08 by cjad              #+#    #+#             */
/*   Updated: 2022/06/01 13:17:07 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include <iostream>
#include <string>

class Contact
{
public:
	std::string	PhoneNumber;
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	Darkestsecret;
	
	void printcolumn(int i);
	void printcontact(void);
	Contact();
	~Contact();
};

#endif