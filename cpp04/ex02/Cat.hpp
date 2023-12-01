/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:35:44 by zlaarous          #+#    #+#             */
/*   Updated: 2023/11/29 15:18:16 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    
    Brain *brain;
    public:
        Cat();
        virtual ~Cat();
        Cat(const Cat &Cat);
        Cat &operator = (const Cat &Cat);

        void	makeSound(void) const;
};

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	virtual ~WrongCat(void);
	WrongCat(const WrongCat& other);
	WrongCat& operator=(const WrongCat &obj);
	void	makeSound(void) const;
};

#endif