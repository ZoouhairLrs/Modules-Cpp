/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:35:44 by zlaarous          #+#    #+#             */
/*   Updated: 2023/12/01 09:24:13 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    Brain *brain;
    public:
        Dog();
        virtual ~Dog();
        Dog(const Dog &dog);
        Dog &operator = (const Dog& _dog);

        void	makeSound(void) const;
};

#endif