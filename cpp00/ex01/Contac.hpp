/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contac.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:19:45 by zlaarous          #+#    #+#             */
/*   Updated: 2023/09/24 23:58:17 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTAC_HPP
# define CONTAC_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

//class about contact
class Contact{
    public :
        string first_Name;
        string last_Name;
        string neck_Name;
        string phone_Number;
        string darkest_Secret;

    //constrictor default
    Contact(){}

    //constrictor parametric
    Contact(string f, string l, string n, string p, string ds){
        first_Name = f;
        last_Name = l;
        neck_Name = n;
        phone_Number = p;
        darkest_Secret = ds;
    }
    // void Add_Contact(void);
};

#endif