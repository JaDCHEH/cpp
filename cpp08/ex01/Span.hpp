/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:11:36 by cjad              #+#    #+#             */
/*   Updated: 2022/08/06 15:37:44 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <algorithm>
# include <vector>
# include <iostream>
# include <stdexcept>

class Span
{
private:
	unsigned int limit;
	std::vector<int> v;
public:
	Span();
	Span(unsigned int N);
	Span(Span &s);
	Span &operator=(Span &span);
	class SpanException : public std::exception
	{
	public:
		SpanException();
		virtual const char *what() const throw ()
		{
			return ("can't add a number , or there's no / only one number\n");
		};
		~SpanException();
	};
	
	Span::Span()
	{
	}
	
	Span::~Span()
	{
	}
	
	void addnumber(int n);
	~Span();
};

Span::Span(/* args */)
{
}

Span::~Span()
{
}


#endif