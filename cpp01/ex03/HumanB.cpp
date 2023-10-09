/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:17:20 by zlaarous          #+#    #+#             */
/*   Updated: 2023/09/26 18:39:29 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(weapon &weapon)
{
    this->weaponPtr = &weapon;
}

void HumanB::attack()
{
    std::cout << "attack from ---> " << weaponPtr->getType() << std::endl;
}