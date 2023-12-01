/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:12:11 by zlaarous          #+#    #+#             */
/*   Updated: 2023/11/30 17:50:23 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>


class Animal {
    protected:
        std::string Atype;
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &obj);
        Animal &operator = (const Animal &obj);
        std::string getType() const;
        virtual void makeSound() const;
};

class WrongAnimal : public Animal {
    protected:
        std::string WAtype;
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(WrongAnimal const &obj);
        WrongAnimal &operator = (const WrongAnimal &obj);
        
        void makeSound() const;
};

#endif