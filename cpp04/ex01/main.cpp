/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:33:02 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/06 18:20:40 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#define ANIMAL_COUNT 8

int main()
{
    Animal	*animals[ANIMAL_COUNT];

	for (int i = 0; i < ANIMAL_COUNT; i++)
	{
		if (i < ANIMAL_COUNT / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}

	for (int i = 0; i < ANIMAL_COUNT; i++)
		delete animals[i];

    return 0;
}
