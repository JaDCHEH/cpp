/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:22:20 by cjad              #+#    #+#             */
/*   Updated: 2022/08/06 17:39:56 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

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
		const char *what() const throw(){
			return "Grade is too high";
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw(){
			return "Grade is too Low";
		}
	};
	Form(std::string name, int signgrade, int execgrade);
	const std::string &getName();
	bool getStatus();
	int getExecgrade();
	int getSigngrade();
	void beSigned(Bureaucrat &bureau);
	~Form();
};

std::ostream& operator<<(std::ostream& os, Form &Form);


#endif