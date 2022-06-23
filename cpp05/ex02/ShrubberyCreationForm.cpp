/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:37:36 by cjad              #+#    #+#             */
/*   Updated: 2022/06/23 11:02:30 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->Target = Target;
}

void ShrubberyCreationForm::executedBy(Bureaucrat &bureau)
{
	std::ofstream ofs(std::string(this->Target + "_shrubbery").c_str());
	if (this->getStatus() && this->getExecgrade() > bureau.getGrade())
	{
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
	}
	else
		std::cout << bureau.getName() << " couldn't execute the form because it wasn't signed or the grade is too high" << std::endl;
	ofs.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}
