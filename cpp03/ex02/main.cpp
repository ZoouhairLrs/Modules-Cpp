/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 03:56:37 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/05 14:31:27 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap	frag("DayneeBoiiz");

	frag.attack("doliprane");
	frag.takeDamage(10);
	frag.attack("doliprane");
	frag.attack("doliprane");
	frag.highFivesGuys();
    return (0);
}