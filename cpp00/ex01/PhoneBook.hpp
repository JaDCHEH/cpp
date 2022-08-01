/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:37:59 by cjad              #+#    #+#             */
/*   Updated: 2022/08/01 17:55:18 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
private:
	Contact contact[8];

public:
	void add(Contact &contact, int *i);
	void printall(void);
	PhoneBook(/* args */);
	~PhoneBook();
};

#endif