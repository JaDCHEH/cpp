/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:29:52 by cjad              #+#    #+#             */
/*   Updated: 2022/06/21 11:33:24 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signgrade, int execgrade) : name(name) , grade_requiredsign(signgrade), grade_requiredexec (execgrade)
{
	std::cout << "Form constructor called" << std::endl;
	this->status = 0;
}

std::ostream& operator<<(std::ostream& os, Form &Form)
{
	
}

std::string &Form::getName()
{
	
}

bool Form::getStatus()
{
	
}

int Form::getExecgrade()
{
	
}

int Form::getSigngrade()
{
	
}

Form::~Form()
{
	
}
