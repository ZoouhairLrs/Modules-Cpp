/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:26:27 by zlaarous          #+#    #+#             */
/*   Updated: 2023/09/26 16:34:02 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void weapon::setType(std::string public_type)
{
    this->private_type = public_type;
}

std::string weapon::getType()
{
    return this->private_type;
}


weapon::weapon(std::string public_type)
{
    private_type = public_type;
}
