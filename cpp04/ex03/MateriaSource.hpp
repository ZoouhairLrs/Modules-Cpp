/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:53:53 by zlaarous          #+#    #+#             */
/*   Updated: 2023/12/03 19:55:04 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MateriaSource_HPP
#define MateriaSource_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private	:
		AMateria *slots[4];

	public	:
		MateriaSource ();
		MateriaSource (MateriaSource const &obj);
		MateriaSource &operator= (const MateriaSource &obj);
		~MateriaSource ();
		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const & type);
		AMateria *getSlotAtIndex(int index) const;
};

#endif
