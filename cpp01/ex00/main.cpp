/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:10:24 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/30 15:57:51 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    zombie *zom;
    zombie *zom1;
    zombie *zom2;

    zom = newZombie("zlaarous");
    zom1 = newZombie("bo3ooo");
    zom2 = newZombie("khikhi");
    zom->randomChump("zom1");
    zom1->randomChump("zom2");
    zom2->randomChump("zom3");
    delete(zom);
    delete(zom1);
    delete(zom2);
}