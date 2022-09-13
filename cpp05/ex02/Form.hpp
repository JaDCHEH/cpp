/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:22:20 by cjad              #+#    #+#             */
/*   Updated: 2022/09/13 18:51:10 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

class Form
{
private:
	const std::string name;
	bool status;
	const int grade_requiredsign;
	const int grade_requiredexec;
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
	class UnsignedException : public std::exception
	{
	public:
		virtual const char *what()const throw();
	};
	Form(std::string name, int signgrade, int execgrade);
	Form();
	Form(Form & copy);
	Form & operator=(Form &copy);
	const std::string &getName() const;
	bool getStatus() const;
	int getExecgrade() const;
	int getSigngrade() const;
	virtual void execute(Bureaucrat const & executor) const = 0;
	void beSigned(Bureaucrat &bureau);
	~Form();
};

std::ostream& operator<<(std::ostream& os, Form &Form);

#endif