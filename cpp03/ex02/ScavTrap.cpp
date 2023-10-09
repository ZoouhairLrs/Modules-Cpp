/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:34:08 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/04 18:21:42 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called\n";
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap attacking " << target << "\n";
}

ScavTrap &ScavTrap::operator = (const ScavTrap &obj)
{
    std::cout << "ScavTrap operator = called\n";
    this->Cname = obj.Cname;
    return *this;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap Constructor Called\n";
    Cname = name;
    hit_points = 100;
    energy_points = 50;
    attack_points = 20;
}

void ScavTrap::guardGAte()
{
    std::cout << this->Cname << " is now in Gate keeper mode\n";
}
