/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:10:24 by zlaarous          #+#    #+#             */
/*   Updated: 2023/09/25 16:17:15 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    zombie *zombies;
    
    zombies = zombieHorde(15, "zombieze");
    delete [] zombies;
    return (0);
}