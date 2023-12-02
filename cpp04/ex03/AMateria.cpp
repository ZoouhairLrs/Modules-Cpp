/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:53:32 by zlaarous          #+#    #+#             */
/*   Updated: 2023/12/02 20:44:23 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria >> Default Constructor Called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
    this->_type = type;
    std::cout << "AMateria >> Constructor Called" << std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
    std::cout << "AMateria >> Copy Constructor Called" << std::endl;
    *this = obj;
}

AMateria &AMateria::operator=(const AMateria &obj)
{
    std::cout << "AMateria >> Assignement Operator Called" << std::endl;
    if (this != &obj)
        this->_type = obj._type;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "AMateria >> Destructor Called" << std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void AMateria::setType(std::string const &type)
{
    this->_type = type;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}


