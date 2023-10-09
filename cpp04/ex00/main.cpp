/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:33:02 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/06 17:55:46 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "--------------->> Animal Class <<---------------" << std::endl;

    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();

    std::cout << "J Type: " << j->getType() << " " << std::endl;
    std::cout << "I Type: " << i->getType() << " " << std::endl;
    i->makeSound();
    meta->makeSound();
	j->makeSound();

    delete  meta;
    delete  j;
    delete  i;

    std::cout << std::endl << "------------->> Wrong Animal Class <<-------------" << std::endl;

    WrongAnimal *wrong = new WrongAnimal();
    WrongAnimal *wrongCat = new WrongCat();

    std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
    std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
    wrong->makeSound();
    wrongCat->makeSound();

    delete  wrong;
    delete  wrongCat;

    return 0;
}
