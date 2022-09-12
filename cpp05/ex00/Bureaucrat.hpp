/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:30:34 by cjad              #+#    #+#             */
/*   Updated: 2022/09/12 12:34:40 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <string>
# include <iostream>
# include <stdexcept>

class Bureaucrat
{
private:
	const std::string Name;
	int Grade;
public:
	Bureaucrat(std::string name, int Grade);
	Bureaucrat();
	Bureaucrat(Bureaucrat & copy);
	Bureaucrat &operator=(Bureaucrat & copy);
	~Bureaucrat();
	int getGrade();
	void incrementGrade();
	void decrementGrade();
	const std::string &getName();

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw(){
			return "This Grade is too high";
		};
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw(){
			return "This Grade is too Low";
		};
	};
};

std::ostream& operator<<(std::ostream& os, Bureaucrat &bureau);

#endif