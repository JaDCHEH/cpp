/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:30:34 by cjad              #+#    #+#             */
/*   Updated: 2022/06/20 15:58:10 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <string>
# include <iostream>

class Bureaucrat
{
private:
	std::string Name;
	int Grade;
public:
	Bureaucrat(std::string name, int Grade);
	~Bureaucrat();
	int getGrade();
	void incrementGrade();
	friend std::ostream& operator<<(std::ostream& os, Bureaucrat &bureau);
	void decrementGrade();
	std::string &getName();
};

#endif