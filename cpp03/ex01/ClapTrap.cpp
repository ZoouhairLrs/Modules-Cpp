/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 03:57:08 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/04 18:06:51 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): hit_points(10), energy_points(10), attack_points(0){
    std::cout << "ClapTrap default constructor called" << std::endl;
}


ClapTrap::ClapTrap(string name): Cname(name) ,hit_points(10), energy_points(10), attack_points(0){
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other){
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
    std::cout << "ClapTrap assignment operator called" << std::endl;
    this->Cname = other.Cname;
    return *this;
}

void ClapTrap::attack(std::string const &target)
{
    if (hit_points > 0 && energy_points > 0) {
        std::cout << "ClapTrap " << Cname << " attacks " << target << " for " << attack_points << " damage!" << std::endl;
        energy_points--;
    } else {
        std::cout << "ClapTrap " << Cname << " can't attack. No hit points or energy points left." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points > 0) {
        if (amount >= hit_points) {
            hit_points = 0;
            energy_points = 0;
            std::cout << "ClapTrap " << Cname << " takes " << amount << " damage and is destroyed!" << std::endl;
        } else {
            hit_points -= amount;
            std::cout << "ClapTrap " << Cname << " takes " << amount << " damage. Hit points: " << hit_points << std::endl;
        }
    } else {
        std::cout << "ClapTrap " << Cname << " is already destroyed. No effect." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points == 0) {
            std::cout << "ClapTrap " << Cname << " is destroyed and cannot be repaired." << std::endl;
    } else if (energy_points > 0) {
        hit_points += amount;
        if (hit_points > 10)
            hit_points = 10; // Hit points cannot exceed the maximum (10)
        std::cout << "ClapTrap " << Cname << " is repaired for " << amount << " hit points. Hit points: " << hit_points << std::endl;
        energy_points--; // Deduct energy point for the repair
    } else {
        std::cout << "ClapTrap " << Cname << " can't be repaired. No energy points left." << std::endl;
    }
}
