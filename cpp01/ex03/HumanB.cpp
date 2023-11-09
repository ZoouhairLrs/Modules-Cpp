/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:17:20 by zlaarous          #+#    #+#             */
/*   Updated: 2023/11/03 18:00:14 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weaponPtr = NULL;
}

void HumanB::setWeapon(weapon &weapon)
{
    this->weaponPtr = &weapon;
}

void HumanB::attack()
{
    if (this->weaponPtr)
        std::cout << "attack from ---> " << weaponPtr->getType() << std::endl;
    else
        std::cout << "can't attack" << std::endl;
}