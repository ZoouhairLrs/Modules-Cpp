/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:20:06 by zlaarous          #+#    #+#             */
/*   Updated: 2023/09/22 16:34:04 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contac.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::cin;

//class about phonebook
class Phone_Book{
    public :
        Contact contact[8];
        int     index;

};

#endif