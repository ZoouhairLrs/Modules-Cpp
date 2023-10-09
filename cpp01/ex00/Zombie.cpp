/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:00:15 by zlaarous          #+#    #+#             */
/*   Updated: 2023/09/25 15:47:53 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

zombie *newZombie(std::string name)
{
    zombie *N_zombie = new zombie(name);
    return (N_zombie);
}

void zombie::randomChump(std::string name)
{
    zombie resident_evil(name);
    std::cout << name << " ";
    resident_evil.announce();
}

void zombie::announce()
{
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
