/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:52:37 by zlaarous          #+#    #+#             */
/*   Updated: 2023/09/26 18:41:48 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, weapon &Weapon) : weaponRef(Weapon)
{
    this->name = name;
}

void HumanA::attack()
{
    std::cout << "Attack from ---> " << weaponRef.getType() << std::endl;
}
