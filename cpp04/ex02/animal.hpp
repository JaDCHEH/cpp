/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:58:31 by cjad              #+#    #+#             */
/*   Updated: 2022/07/29 16:38:33 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>
class animal
{
protected:
	std::string type;
public:
	animal();
	std::string getType() const;
	virtual void makeSound() const = 0;
	virtual ~animal();
};


#endif