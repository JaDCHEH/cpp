/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:05:29 by cjad              #+#    #+#             */
/*   Updated: 2023/05/30 14:10:43 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
Animal *animal[10];
    for(int i = 0; i < 5; i++)
        animal[i] = new Dog();
        
    for(int i = 5; i < 10; i++)
        animal[i] = new Cat();
    
    for (int i = 0; i < 10; i++)
    {
        std::cout << animal[i]->getType() << std::endl;
    }
}