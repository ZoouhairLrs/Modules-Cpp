/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:19:45 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/27 19:55:42 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>  

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::getline;

//class about contact
class Contact{
    private:
        string first_Name;
        string last_Name;
        string neck_Name;
        string phone_Number;
        string darkest_Secret;

    public:
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
    
//getters
    string getFirst_Name(void) const{
        return first_Name;
    }

    string getLast_Name(void) const{
        return last_Name;
    }
    
    string getNeck_Name(void) const{
        return neck_Name;
    }
    
    string getPhone_Number(void) const{
        return phone_Number;
    }
    
    string getDarkest_Secret(void) const{
        return darkest_Secret;
    }
// void Add_Contact(void);
};

#endif