/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:37:36 by cjad              #+#    #+#             */
/*   Updated: 2022/08/08 20:03:29 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->Target = Target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if(this->getStatus() == 0)
		throw Form::UnsignedException();
	else if (executor.getGrade() > this->getExecgrade())
		throw Bureaucrat::GradeTooLowException();
	std::ofstream ofs(std::string(this->Target + "_shrubbery").c_str());
	ofs << "                                                         ." << std::endl;
	ofs << "                                              .         ;  " << std::endl;
	ofs << "                 .              .              ;%     ;;   " << std::endl;
	ofs << "                   ,           ,                :;%  %;   " << std::endl;
	ofs << "                    :         ;                   :;%;'     .,   " << std::endl;
	ofs << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
	ofs << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	ofs << "             %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
	ofs << "              ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	ofs << "               `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	ofs << "                `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	ofs << "                   `:%;.  :;bd%;          %;@%;'" << std::endl;
	ofs << "                     `@%:.  :;%.         ;@@%;'   " << std::endl;
	ofs << "                       `@%.  `;@%.      ;@@%;         " << std::endl;
	ofs << "                         `@%%. `@%%    ;@@%;        " << std::endl;
	ofs << "                           ;@%. :@%%  %@@%;       " << std::endl;
	ofs << "                             %@bd%%%bd%%:;     " << std::endl;
	ofs << "                               #@%%%%%:;;" << std::endl;
	ofs << "                                %@@%%%::;" << std::endl;
	ofs << "                               %@@@%(o);  . '    " << std::endl;
	ofs << "                               %@@@o%;:(.,'         " << std::endl;
	ofs << "                           `.. %@@@o%::;         " << std::endl;
	ofs << "                              `)@@@o%::;         " << std::endl;
	ofs << "                               %@@(o)::;        " << std::endl;
	ofs << "                              .%@@@@%::;         " << std::endl;
	ofs << "                              ;%@@@@%::;.          " << std::endl;
	ofs << "                             ;%@@@@%%:;;;. " << std::endl;
	ofs << "                         ...;%@@@@@%%:;;;;,..    " << std::endl;
	ofs.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}
