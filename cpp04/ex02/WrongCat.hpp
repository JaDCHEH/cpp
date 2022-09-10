/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:01:27 by cjad              #+#    #+#             */
/*   Updated: 2022/09/10 19:01:28 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{ 
    public:
        WrongCat( void );
		~WrongCat( void );
		WrongCat(WrongCat const & _p1);
		WrongCat & operator = (WrongCat const & _p1);
		void makeSound( void ) const;
};
#endif