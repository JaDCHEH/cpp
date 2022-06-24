/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:13:07 by cjad              #+#    #+#             */
/*   Updated: 2022/06/23 12:03:07 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PREASENDETIALPARDONFORM_HPP
# define PREASENDETIALPARDONFORM_HPP
# include "Form.hpp"
# include <stdlib.h>

class PresidentialPardonForm : public Form
{
private:
	std::string Target;
public:
	PresidentialPardonForm(std::string Target);
	void executed() const;
	~PresidentialPardonForm();
};

#endif