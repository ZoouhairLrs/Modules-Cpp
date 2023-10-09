/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 03:57:18 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/03 04:41:01 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class ClapTrap{
    private:
        string name;
        unsigned int hit_points;
        unsigned int energy_points;
        unsigned int attack_points;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(ClapTrap const &other);
        ClapTrap& operator=(ClapTrap const &other);

        void attack(const string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif