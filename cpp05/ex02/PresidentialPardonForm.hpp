/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:13:07 by cjad              #+#    #+#             */
/*   Updated: 2022/08/08 20:00:16 by cjad             ###   ########.fr       */
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
	void execute(Bureaucrat const & executor) const;
	~PresidentialPardonForm();
};

#endif