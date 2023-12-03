/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:13:20 by zlaarous          #+#    #+#             */
/*   Updated: 2023/12/03 21:40:33 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    std::cout << "Character >> Default Constructor Called" << std::endl;
}

Character::Character(std::string const _name)
{
    name = _name;
    for (int i = 0; i < 4; i++)
        slot[i] = NULL;
}

Character::Character(const Character &obj)
{
    std::cout << "Character >> Copy Constructor Called" << std::endl;
    *this = obj;
}

Character::~Character()
{
    std::cout << "Character >> Destructor Called" << std::endl;
    for (int i = 0; i < 4; i++)
        if (slot[i])
            delete slot[i];
}

Character &Character::operator=(const Character &obj)
{
    std::cout << "Character >> Assignement Operator Called" << std::endl;
    if (this != &obj)
    {
        name = obj.name;
        for (int i = 0; i < 4; i++)
            slot[i] = obj.slot[i];
    }
    return (*this);
}

std::string const &Character::getName() const
{
    return (name);
}

void Character::setName(std::string const &_name)
{
    name = _name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
        if (!slot[i])
        {
            slot[i] = m;
            return ;
        }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return ;
    delete slot[idx];
    slot[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 3)
        return ;
    if (slot[idx])
        slot[idx]->use(target);
}