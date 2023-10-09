/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 03:56:37 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/04 18:22:49 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::string s1 = "zouhair";
    std::string s2 = "laaroussi";

    ScavTrap  c1(s1);
    ScavTrap  c2(s2);

    c1.attack(s2);
    c2.takeDamage(1);
    c2.beRepaired(10);
    return (0);
}