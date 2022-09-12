/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:58:31 by cjad              #+#    #+#             */
/*   Updated: 2022/09/12 15:27:34 by cjad             ###   ########.fr       */
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
	Animal(Animal &copy);
	Animal &operator= (Animal & copy);
	std::string getType() const;
	virtual void makeSound() const = 0;
	virtual ~Animal();
};


#endif