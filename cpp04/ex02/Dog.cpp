/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:36:55 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/06 17:46:26 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor Called" << std::endl;
    Atype = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
    std::cout << "Dog Copy Constructor Called" << std::endl;
    Atype = "Dog";
    *this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
    std::cout << "Dog Assignment Operator Called" << std::endl;
    Atype = dog.Atype;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}
