/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:57:23 by cjad              #+#    #+#             */
/*   Updated: 2022/09/14 17:18:01 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
private:
	T *array;
	unsigned int _size;
public:
	Array() : array(nullptr), _size(1) {};
	
	Array(unsigned int n) : array(new T[n]()) , _size(n) {};
	
	Array(Array const &copy) : array(new T[copy._size]), _size(copy._size)
	{
		unsigned int i = 0;
		while (i < copy._size)
		{
			this->array[i] = copy.array[i];
			i++;
		}
		
	};

	Array &operator=(Array &assigned)
	{
		unsigned int i = 0;
		delete [] this->array;
		this->array = new T[assigned._size];
		this->_size = assigned._size;
		while (i < assigned._size)
		{
			this->array[i] = assigned.array[i];
			i++;
		}
		return(*this);
	};

	class Access : public std::exception
	{
	public:
		virtual const char *what() const throw ()
		{
			return ("Index is out of bonds");
		};
	};

	T &operator[](unsigned int i)
	{
		if (i >= this->_size)
			throw Access();
		return (this->array[i]);
	}

	unsigned int size()
	{
		return (this->_size);
	};
	~Array()
	{
		delete [] this->array;
	};
};

#endif