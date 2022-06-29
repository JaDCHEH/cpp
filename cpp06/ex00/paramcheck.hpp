/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramcheck.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:23:06 by cjad              #+#    #+#             */
/*   Updated: 2022/06/28 14:29:18 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARAMCHECK_HPP
# define PARAMCHECK_HPP
# include <string>

class paramcheck
{
private:
	std::string arg;
public:
	paramcheck(std::string arg);
	bool check();
	~paramcheck();
};


#endif