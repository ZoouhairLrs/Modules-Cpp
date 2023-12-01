/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:36:55 by zlaarous          #+#    #+#             */
/*   Updated: 2023/12/01 09:22:58 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp" 

Cat::Cat()
{
    std::cout << "Cat Default Constructor Called" << std::endl;
    Atype = "Cat";
    this->brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
    delete this->brain;
}

Cat::Cat(const Cat &Cat)
{
    this->brain = NULL;
    std::cout << "Cat Copy Constructor Called" << std::endl;
    Atype = "Cat";
    *this = Cat;
}

Cat &Cat::operator=(const Cat &Cat)
{
    std::cout << "Cat Assignment Operator Called" << std::endl;
    Atype = Cat.Atype;
    if (this->brain)
        delete this->brain;
    this->brain = new Brain();
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
