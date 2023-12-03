/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:13:15 by zlaarous          #+#    #+#             */
/*   Updated: 2023/12/03 19:54:42 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
    private	:
		std::string name;
		AMateria *slot[4];

    public:
        Character();
        Character(std::string const _name);
        Character(const Character &obj);
        Character &operator=(const Character &obj);
        virtual ~Character();

        std::string const &getName() const;
        void setName(std::string const &name);

        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif