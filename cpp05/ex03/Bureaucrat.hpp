/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:30:34 by cjad              #+#    #+#             */
/*   Updated: 2022/07/29 16:58:35 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <string>
# include <iostream>
# include <stdexcept>

class Form;

class Bureaucrat
{
private:
	const std::string Name;
	int Grade;
public:
	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(){}
		const char *exception(){
			return "Bureau Grade is too high";
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(){}
		const char *exception(){
			return "Bureau Grade is too Low";
		}
	};
	Bureaucrat(std::string name, int Grade);
	~Bureaucrat();
	int getGrade() const;
	void incrementGrade();
	bool SignForm(int Signgrade);
	void decrementGrade();
	void executeForm(Form const & form);
	const std::string &getName() const;
};

#endif