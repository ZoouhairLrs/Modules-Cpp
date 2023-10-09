/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:01:37 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/06 17:57:24 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Animal

Animal::Animal()
{
    this->Atype = "Animal";
    std::cout << "Animal Class default constructor called" << std::endl;
}

Animal::~Animal()
{
     std::cout << "Animal Class destructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    Atype = obj.Atype;
    *this = obj;
    std::cout << "Animal Copy Constructor Called\n";
}

Animal &Animal::operator=(const Animal &obj)
{
    if (this!= &obj)
    {
        Atype = obj.Atype;
    }
    return *this;
}

std::string Animal::getType() const
{
    return this->Atype;
}

void Animal::makeSound() const
{
    std::cout << "Animal makeSound called" << std::endl;
}

//WrongAnimal

WrongAnimal::WrongAnimal()
{
    this->Atype = "WrongAnimal";
    std::cout << "WrongAnimal Class default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &obj)
{
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    if (this!= &obj)
    {
        Atype = obj.Atype;
    }
    return *this;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    Atype = "WrongAnimal";
    *this = obj;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makeSound called" << std::endl;
}
