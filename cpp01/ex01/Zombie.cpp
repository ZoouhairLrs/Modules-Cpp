/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:00:15 by zlaarous          #+#    #+#             */
/*   Updated: 2023/09/25 20:24:08 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

zombie *zombieHorde(int n, std::string name)
{
    if ( n <= 0)
        return (0);
    zombie *N_zombie = new zombie[n];
    for (int i = 0; i < n; i++)
    {
        N_zombie[i].setName(name);
        std::cout << name << " " << i << " ";
        N_zombie[i].announce();
    }
    return (N_zombie);
}

void zombie::announce()
{
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
