/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:37:38 by cjad              #+#    #+#             */
/*   Updated: 2022/08/09 14:51:26 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string Target;
public:
	ShrubberyCreationForm(std::string Target);
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm & copy);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm &copy);
	void execute(Bureaucrat const & executor) const;
	~ShrubberyCreationForm();
};

#endif