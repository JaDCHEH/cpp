/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:37:36 by cjad              #+#    #+#             */
/*   Updated: 2022/06/23 12:03:38 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->Target = Target;
}

void ShrubberyCreationForm::executed() const
{
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
