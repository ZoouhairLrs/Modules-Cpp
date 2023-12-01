/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:33:02 by zlaarous          #+#    #+#             */
/*   Updated: 2023/12/01 10:17:59 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#define ANIMAL_COUNT 2

int main()
{
	// Cat cat;
	// Cat newCat = cat;

	// std::cout << &cat << std::endl;	

	// cat = cat;
	// Dog dog;
	// Dog d = dog;
    Animal	*animals[ANIMAL_COUNT];

	// int a = 1337; //initialize a
	// int b;
	// b = 1337; //assign 1337 to b

	// const c;

	// c = 1337; //error

	// const int d = 1337; //initialize d

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
