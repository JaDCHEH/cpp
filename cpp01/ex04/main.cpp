/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:15:13 by cjad              #+#    #+#             */
/*   Updated: 2022/06/10 14:45:59 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void rep(char *filename, std::string str_find, std::string str_rep)
{
	std::ifstream ifs(filename);
	std::ofstream ofs(strcat(filename , ".replace"));
	std::string	file;
	std::string temp;
	std::string finalstring;
	size_t find;
	while (std::getline(ifs, file))
	{
		find = file.find(str_find, 0);
		if (find == std::string::npos)
			finalstring = file;
		while (find != std::string::npos)
		{
			temp = file.substr(0, find);
			temp += str_rep;
			temp += file.substr(find + str_find.length());
			file = temp;
			finalstring += temp;
			find = file.find(str_find, 0);
		}
		ofs << finalstring;
		if (!ifs.eof())
			ofs << std::endl;
		finalstring = "";
	}
	ofs.close();
	ifs.close();
}

void open_files(char *filename, char *to_replace, char *replace)
{
	std::string str_find(to_replace);
	std::string str_rep(replace);
	
	rep(filename, str_find, str_rep);
}


int main(int ac, char **av)
{
	if (ac == 4)
	{
		open_files(av[1], av[2], av[3]);
	}
}