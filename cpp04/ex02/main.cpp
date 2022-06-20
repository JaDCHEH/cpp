/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:05:29 by cjad              #+#    #+#             */
/*   Updated: 2022/06/18 12:37:11 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"
#include "dog.hpp"

int main()
{
	const animal* j = new dog();
	const animal* i = new cat();
	delete j;
	delete i;
	return 0;
}