/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:33:02 by zlaarous          #+#    #+#             */
/*   Updated: 2023/11/09 20:29:15 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#define ANIMAL_COUNT 8

int main()
{
    Animal* j = new Dog();
	Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    Cat Basic;
    {
        Cat tmp = Basic;
    }

    Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }
	return 0;
}
