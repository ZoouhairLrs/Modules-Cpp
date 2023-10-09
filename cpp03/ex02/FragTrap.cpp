/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:12:38 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/05 14:28:48 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(void)
{
    std::cout << "FragTrap default constructor" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_points = 30;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor" << std::endl;
}

FragTrap::FragTrap(string name)
{
    std::cout << "FragTrap Copy Constructor Called\n";
    Cname = name;
    hit_points = 100;
    energy_points = 100;
    attack_points = 30;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    std::cout << "FragTrap Assignment Operator Called\n";
    this->Cname = obj.Cname;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    cout << "High Fives Guys\n";
}
