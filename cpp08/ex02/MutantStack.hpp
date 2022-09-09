/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:58:35 by cjad              #+#    #+#             */
/*   Updated: 2022/09/02 16:13:40 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	MutantStack() : std::stack<T>() {};
	MutantStack(MutantStack &copy) : std::stack<T>(copy) {};
	MutantStack & operator=(MutantStack &stack){
		if (this == &stack)
			return *this;
		std::stack<T>::operator=(stack);
		return *this;
	};
	iterator begin(){return(std::stack<T>::c.begin());};
	iterator end(){return(std::stack<T>::c.end());};
	reverse_iterator rbegin(){return(std::stack<T>::c.rbegin());};
	reverse_iterator rend(){return(std::stack<T>::c.rend());};
	~MutantStack(){};
};


#endif