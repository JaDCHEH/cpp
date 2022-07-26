/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:27:30 by cjad              #+#    #+#             */
/*   Updated: 2022/07/26 09:31:37 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<typename T>
T max(T &a, T &b)
{
	if (a > b)
		return a;
	return b;
}

template<typename T>
T min(T &a, T &b)
{
	if (a < b)
		return a;
	return b;
}

#endif