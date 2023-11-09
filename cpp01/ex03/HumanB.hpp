/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:16:46 by zlaarous          #+#    #+#             */
/*   Updated: 2023/11/03 17:52:55 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
#include "Weapon.hpp"

class HumanB{
    private:
        std::string name;
        weapon *weaponPtr;
    public:
        HumanB(std::string name);
        HumanB(void){};
        void setWeapon(weapon &weapon);
        void attack();
};

#endif