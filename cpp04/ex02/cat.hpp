/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:00:20 by cjad              #+#    #+#             */
/*   Updated: 2022/06/18 12:30:47 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "animal.hpp"
#include "brain.hpp"

class cat : public animal
{
private:
	brain* catbrain;
public:
	cat();
	void makeSound() const;
	~cat();
};

#endif