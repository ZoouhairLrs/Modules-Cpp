/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:36:55 by zlaarous          #+#    #+#             */
/*   Updated: 2023/12/01 09:24:06 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor Called" << std::endl;
    Atype = "Dog";
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called" << std::endl;
    delete this->brain;
    this->brain = NULL;
}

Dog::Dog(const Dog &dog)
{
    this->brain = NULL;
    std::cout << "Dog Copy Constructor Called" << std::endl;
    Atype = "Dog";
    *this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
    std::cout << "Dog Assignment Operator Called" << std::endl;
    Atype = dog.Atype;
    if (this->brain)
    {
        std::cout << "Deleting brain" << std::endl;
        delete this->brain;
        this->brain = NULL;
    }
    this->brain = new Brain();
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}
