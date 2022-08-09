/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:37:31 by cjad              #+#    #+#             */
/*   Updated: 2022/08/09 14:50:50 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string Target;
public:
	RobotomyRequestForm(std::string name);
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm & copy);
	RobotomyRequestForm & operator=(RobotomyRequestForm &copy);
	void execute(Bureaucrat const & executor) const;
	~RobotomyRequestForm();
};

#endif