/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:10:50 by cjad              #+#    #+#             */
/*   Updated: 2022/08/06 15:34:35 by cjad             ###   ########.fr       */
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

Span::~Span(){
	
}
