/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:53:47 by zlaarous          #+#    #+#             */
/*   Updated: 2023/12/03 22:26:16 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

// class ICharacter;
class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(std::string const &type);
        AMateria(const AMateria &obj);
        AMateria &operator=(const AMateria &obj);
        virtual ~AMateria();

        std::string const &getType() const; //Returns the materia type
        void setType(std::string const &type);
        
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);
};

#endif
