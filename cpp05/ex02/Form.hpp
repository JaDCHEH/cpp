/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:22:20 by cjad              #+#    #+#             */
/*   Updated: 2022/07/29 16:58:31 by cjad             ###   ########.fr       */
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
		GradeTooHighException(){}
		const char *exception(){
			return "Form Grade is too high";
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(){}
		const char *exception(){
			return "Form Grade is too Low";
		}
	};
	class UnsignedException : public std::exception
	{
	public:
		UnsignedException(){}
		const char *exception(){
			return "Form is not signed";
		}
	};
	Form(std::string name, int signgrade, int execgrade);
	const std::string &getName() const;
	bool getStatus() const;
	int getExecgrade() const;
	int getSigngrade() const;
	virtual void executed() const;
	void execute(Bureaucrat const & executor) const;
	void beSigned(Bureaucrat &bureau);
	~Form();
};


#endif