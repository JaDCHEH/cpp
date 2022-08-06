/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:11:36 by cjad              #+#    #+#             */
/*   Updated: 2022/08/06 17:21:59 by cjad             ###   ########.fr       */
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
		virtual const char *what() const throw ()
		{
			return ("can't add a number , or there's no / only one number\n");
		};
	};
	void addnumber(int n);
	void addnumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int longestSpan();
	int ShortestSpan();
	~Span();
};

Span::Span(/* args */)
{
}

Span::~Span()
{
}


#endif