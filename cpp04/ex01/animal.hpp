/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:58:31 by cjad              #+#    #+#             */
/*   Updated: 2022/08/02 15:43:03 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>
class Animal
{
protected:
	std::string type;
public:
	Animal();
	std::string getType() const;
	virtual void makeSound() const;
	virtual ~Animal();
};


#endif