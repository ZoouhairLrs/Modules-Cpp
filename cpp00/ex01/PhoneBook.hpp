/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:20:06 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/27 19:42:47 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

//class about phonebook
class PhoneBook{
    public:
        Contact contact[8];
        int     index;

    public:
        PhoneBook(){}
        // void    Add_Contact(PhoneBook &pb);
        // void    Search_contact(PhoneBook &pb);
};

#endif