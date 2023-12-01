/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:36:55 by zlaarous          #+#    #+#             */
/*   Updated: 2023/11/30 01:40:16 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//Cat
Cat::Cat()
{
    std::cout << "Cat Default Constructor Called" << std::endl;
    Atype = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
}

Cat::Cat(const Cat &Cat)
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
    Atype = "Cat";
    *this = Cat;
}

Cat &Cat::operator=(const Cat &Cat)
{
    std::cout << "Cat Assignment Operator Called" << std::endl;
    Atype = Cat.Atype;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow!! 🐱!" << std::endl;
}

//WrongCats
WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->Atype = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat ddestructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
	Atype = "WrongCat";
    std::cout << "WrongCat Copy Constructor Called\n";
    *this = obj;
}

WrongCat & WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat copy operator called" << std::endl;
	this->Atype = other.Atype;
    return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow!! 🐱!" << std::endl;
}
