/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:01:12 by cjad              #+#    #+#             */
/*   Updated: 2022/09/10 19:01:14 by cjad             ###   ########.fr       */
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
		WrongAnimal(WrongAnimal const & _p1);
		WrongAnimal & operator = (WrongAnimal const & _p1);
		std::string getType( void ) const;
		virtual void makeSound( void ) const;
};

#endif //WRONGANIMAL_HPP