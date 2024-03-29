/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:30:34 by cjad              #+#    #+#             */
/*   Updated: 2022/09/13 18:50:29 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <string>
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;
class Bureaucrat;

class Bureaucrat
{
private:
	const std::string Name;
	int Grade;
public:
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	Bureaucrat(std::string name, int Grade);
	~Bureaucrat();
	Bureaucrat();
	Bureaucrat(Bureaucrat & copy);
	Bureaucrat &operator=(Bureaucrat & copy);
	int getGrade() const;
	void incrementGrade();
	void SignForm(Form &form);
	void executeForm(Form const & form);
	void decrementGrade();
	const std::string &getName() const;
};

std::ostream& operator<<(std::ostream& os, Bureaucrat &bureau);

#endif