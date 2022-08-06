/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:22:20 by cjad              #+#    #+#             */
/*   Updated: 2022/08/06 15:52:39 by cjad             ###   ########.fr       */
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
		const char *what(){
			return "Grade is too high";
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what(){
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


#endif