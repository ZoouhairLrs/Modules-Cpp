/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:46:13 by zlaarous          #+#    #+#             */
/*   Updated: 2023/12/03 19:54:30 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
#define Ice_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Ice : public AMateria
{
	public	:
		Ice ();
		Ice (Ice const &obj);
		Ice &operator= (const Ice &obj);
		~Ice ();
		void use(ICharacter&target);
		AMateria *clone() const;
};

#endif