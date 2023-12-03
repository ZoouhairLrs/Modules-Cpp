/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:55:25 by zlaarous          #+#    #+#             */
/*   Updated: 2023/12/03 19:56:36 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource : Default Constructor Called" << std::endl;
	for(int i = 0; i < 4; i++)
		slots[i] = NULL;
}


MateriaSource::MateriaSource(MateriaSource const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj){
		for(int i = 0; i < 4; i++){
			AMateria *p = obj.getSlotAtIndex(i);
			if(p)
			{
				slots[i] = p->clone();
				*slots[i] = *p;
			}
			else
				slots[i] = NULL;
		}
	}
}

MateriaSource	&MateriaSource::operator= (const MateriaSource &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj){
		for(int i = 0; i < 4; i++){
			AMateria *ptr = obj.getSlotAtIndex(i);
			if(slots[i])
				delete slots[i];
			slots[i] = ptr;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource : Destructor Called" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if(slots[i]){
			delete slots [i];
		}
	}
}

AMateria *MateriaSource::getSlotAtIndex(int index) const{
	if(index >= 0 && index < 4)
		return slots[index];
	return NULL;
}

void MateriaSource::learnMateria(AMateria *m){
	if(!m)
		return ;
	for (size_t i = 0; i < 4; i++)
	{
		if(slots[i] == NULL){
			slots[i] = m;
			return ;
		}
	}
	
}

AMateria *MateriaSource::createMateria(std::string const & type){
	for(int i = 0; i < 4; i++){
		if(slots[i]){
			if(slots[i]->getType() == type){
				return slots[i]->clone();
			}
		}
	}
	return NULL;
}
