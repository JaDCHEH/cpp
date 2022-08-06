/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:10:50 by cjad              #+#    #+#             */
/*   Updated: 2022/08/06 17:51:59 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
	
}

Span::Span(unsigned int N){
	this->limit = N;
}

void Span::addnumber(int n){
	if(this->v.size() >= this->limit)
		throw SpanException();
	else
		this->v.push_back(n);
}

unsigned int Span::longestSpan(){
	if(this->v.size() <= 1)
		throw SpanException();
	else
	{
		int max = *max_element(this->v.begin(), this->v.end());
		int min = *min_element(this->v.begin(), this->v.end());
		std::cout << "LongestSpan is " << max - min << std::endl;
		return max - min;
	}
}

void Span::addnumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator i = begin; i < end; i++)
		this->addnumber(*i);
}

unsigned int Span::ShortestSpan(){
	if(this->v.size() <= 1)
		throw SpanException();
	else
	{
		std::vector<int> vcopy(this->v);
		std::sort(vcopy.begin(), vcopy.end());
		int ShortestSpan = vcopy[1] - vcopy[0];
		for (unsigned int i = 2; i < vcopy.size(); i++)
		{
			if (vcopy[i] - vcopy[i - 1] < ShortestSpan)
				ShortestSpan = vcopy[i] - vcopy[i - 1];
		}
		std::cout << "ShortestSpan is " << ShortestSpan << std::endl;
		return ShortestSpan;
	}
}

Span::~Span(){
	
}
