/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:47:09 by zlaarous          #+#    #+#             */
/*   Updated: 2023/12/03 19:47:37 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice : Default Constructor Called" << std::endl;
	this->setType("ice");
}


Ice::Ice(Ice const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Ice	&Ice::operator= (const Ice &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	(void)obj;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice : Destructor Called" << std::endl;
}

void Ice::use(ICharacter &target){
	std::cout <<"* shoots an ice bolt at " << target.getName()<<'\n';
}

AMateria* Ice::clone() const{
	AMateria *ptr;

	ptr = new Ice;
	return ptr;
}
