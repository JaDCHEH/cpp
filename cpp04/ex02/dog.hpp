/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:01:02 by cjad              #+#    #+#             */
/*   Updated: 2022/06/18 12:31:46 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "animal.hpp"
# include "brain.hpp"

class dog : public animal
{
private:
	brain* dogbrain;
public:
	dog();
	void makeSound() const;
	~dog();
};


#endif