/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:42:53 by zlaarous          #+#    #+#             */
/*   Updated: 2023/12/03 19:54:34 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
#define Cure_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Cure : public AMateria
{
	public	:
		Cure ();
		Cure (Cure const &obj);
		Cure &operator= (const Cure &obj);
		~Cure ();
		void use(ICharacter& target);
		AMateria* clone() const;
};

#endif
