/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:57:23 by cjad              #+#    #+#             */
/*   Updated: 2022/07/28 12:35:07 by cjad             ###   ########.fr       */
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
	Array() : array(new T[0]()), _size(0) {};
	Array(unsigned int n) : array(new T[n]()) , _size(n) {};
	Array(Array &copy)
	{
		unsigned int i = 0;
		this->array = new T[copy._size];
		this->_size = copy._size;
		while (i < copy._size)
		{
			this->array[i] = copy.array[i];
			i++;
		}
		
	};

	Array &operator=(Array &assigned)
	{
		if (this == assigned)
			return this;
		int i = 0;
		this->array = new T[assigned._size];
		this->_size = assigned._size;
		while (i < assigned._size)
		{
			this->array[i] = assigned.array[i];
			i++;
		}
		return(this);
	};
	class Access : public std::exception
	{
	public:
		Access()
		{};
		virtual const char *what() const throw ()
		{
			return ("Index is out of bonds\n");
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
		delete this->array;
	};
};

#endif