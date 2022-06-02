/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:37:59 by cjad              #+#    #+#             */
/*   Updated: 2022/06/01 14:39:05 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
# include "Contact.class.hpp"

class PhoneBook
{
public:
	Contact contact[8];
	void add(Contact &contact, int i);
	void printall(void);
	PhoneBook(/* args */);
	~PhoneBook();
};

#endif