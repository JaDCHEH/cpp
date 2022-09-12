/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:01:12 by cjad              #+#    #+#             */
/*   Updated: 2022/09/12 15:22:18 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <iostream>
#include <string.h>

class WrongAnimal{
	protected :
		std::string type;
	public :
		WrongAnimal( void );
		~WrongAnimal( void );
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal & operator = (const WrongAnimal &copy);
		std::string getType( void ) const;
		virtual void makeSound( void ) const;
};

#endif //WRONGANIMAL_HPP