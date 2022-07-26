/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:38:51 by cjad              #+#    #+#             */
/*   Updated: 2022/07/25 13:55:46 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	int a;
	int b;
};

uintptr_t serialize(Data* ptr)
{
	uintptr_t ptr1 = reinterpret_cast<uintptr_t>(ptr);
	return (ptr1);
}

Data* deserialize(uintptr_t raw)
{
	Data *ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

int main()
{
	Data data;
	data.a = 5;
	data.b = 180;
	Data *ptr;
	ptr = deserialize(serialize(&data));
	std::cout << data.a << "   " << data.b << "original" << std::endl;
	std::cout << ptr->a << "   " << ptr->b << "original" << std::endl;
}