/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:25:00 by zlaarous          #+#    #+#             */
/*   Updated: 2023/11/03 17:59:08 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    
    {
        weapon  club = weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    } 
    {
        // weapon  club = weapon("crude spiked club");
        HumanB jim(NULL);
        // jim.setWeapon(club);
        // jim.attack();
        // club.setType("some other type of club");
        // jim.attack();
    }

    return 0;
}