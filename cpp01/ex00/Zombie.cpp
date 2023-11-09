/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:00:15 by zlaarous          #+#    #+#             */
/*   Updated: 2023/11/03 18:09:51 by zlaarous         ###   ########.fr       */
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
    resident_evil.announce();
}

void zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

zombie::zombie(){
    std::cout << name << ": alive" << std::endl;
}
zombie::~zombie()
{
    std::cout << name << ": Deid" << std::endl;
}