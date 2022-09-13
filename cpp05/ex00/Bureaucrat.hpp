/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:30:34 by cjad              #+#    #+#             */
/*   Updated: 2022/09/13 18:46:47 by cjad             ###   ########.fr       */
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
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	const std::string &getName() const;

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
};

std::ostream& operator<<(std::ostream& os, Bureaucrat &bureau);

#endif