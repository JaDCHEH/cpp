/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:13:07 by cjad              #+#    #+#             */
/*   Updated: 2022/08/09 14:48:52 by cjad             ###   ########.fr       */
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
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm & copy);
	PresidentialPardonForm & operator=(PresidentialPardonForm &copy);
	void execute(Bureaucrat const & executor) const;
	~PresidentialPardonForm();
};

#endif