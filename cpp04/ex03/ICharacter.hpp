/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:14:10 by zlaarous          #+#    #+#             */
/*   Updated: 2023/12/03 19:54:23 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
#include "AMateria.hpp"

// class AMateria;

class ICharacter
{
    public:
        virtual std::string const &getName() const = 0;
        virtual void equip(AMateria *m) = 0;
        virtual ~ICharacter() {}
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

#endif