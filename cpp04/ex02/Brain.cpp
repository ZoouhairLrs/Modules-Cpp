/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:15:29 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/06 18:18:45 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor Called" << std::endl;
	for (int i = 0; i < 100; i++) {
		ideas[i] = "";
	}
}

Brain::~Brain()
{
	std::cout << "Brain class destructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain class copy constructor called" << std::endl;
	*this = obj;
}

Brain & Brain::operator=(const Brain &obj)
{
	std::cout << "Brain class copy assignment operator" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}
