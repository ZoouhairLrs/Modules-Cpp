/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 03:56:37 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/03 04:45:57 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    string s1 = "zouhair";
    string s2 = "hanzou";

    ClapTrap  c1(s1);
    ClapTrap  c2(s2);

    c1.attack(s2);
    // c2.takeDamage(10);
    c2.beRepaired(10);
    return (0);
}