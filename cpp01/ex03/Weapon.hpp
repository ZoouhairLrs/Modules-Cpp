/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:26:30 by zlaarous          #+#    #+#             */
/*   Updated: 2023/09/26 16:34:43 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class weapon {
    private: 
        std::string private_type;
    public:
        std::string getType();
        void setType(std::string public_type);
        weapon(){};
        weapon(std::string public_type);
};
#endif
