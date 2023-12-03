/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:44:20 by zlaarous          #+#    #+#             */
/*   Updated: 2023/12/03 19:45:25 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure : Default Constructor Called" << std::endl;
	this->setType("cure");
}


Cure::Cure(Cure const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Cure	&Cure::operator= (const Cure &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	(void)obj;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure : Destructor Called" << std::endl;
}

AMateria *Cure::clone() const{
	AMateria *ptr;

	ptr = new Cure;
	return ptr;
}

void Cure::use(ICharacter& target){
		std::cout <<"* heals "<<target.getName() <<"’s wounds *\n";
}

