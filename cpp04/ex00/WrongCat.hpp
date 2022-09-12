/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:01:27 by cjad              #+#    #+#             */
/*   Updated: 2022/09/12 15:21:52 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{ 
    public:
        WrongCat( void );
		~WrongCat( void );
		WrongCat(const WrongCat &copy);
		WrongCat & operator = (const WrongCat &copy);
		void makeSound( void ) const;
};
#endif