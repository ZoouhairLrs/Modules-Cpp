/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:19:51 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/27 21:17:44 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void    welcomeScreen()
{
    cout<<"Welcome to My PhoneBook simple Application"<<endl;
    cout<<"               HOW TO USE : "<<endl;
    cout<<"                  ADD"<<endl;
    cout<<"                 SEARCH"<<endl;
    cout<<"                  EXIT"<<endl;
}

void	print_value(string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		cout << str << ".";
	}
	else
		cout <<str;
}

void    Add_Contact(PhoneBook &pb)
{
    static int i = 0;
    Contact contact;

    cout << "His(her) first name is..." << endl;
    while (!getline(cin, contact.getFirst_Name()) || contact.getFirst_Name().empty())
    {
        if (cin.eof())
            exit(0);
        cout << "Field is empty or invalid. Please enter a valid first name :" << endl;   
    }
    cout << "His(her) last name is..." << endl;
    while (!getline(cin, contact.getLast_Name()) || contact.getLast_Name().empty())
    {
        if (cin.eof())
            exit(0);
        cout << "Field is empty or invalid. Please enter a valid last name :" << endl;
    }
    cout << "His(her) nickname is..." << endl;
    while (!getline(cin, contact.getNeck_Name()) || contact.getNeck_Name().empty())
    {
        if (cin.eof())
            exit(0);
        cout << "Field is empty or invalid. Please enter a valid nickname :" << endl;
    }
    cout << "His(her) phone number is..." << endl;
    while (!getline(cin, contact.getPhone_Number()) || contact.getPhone_Number().empty())
    {
        if (cin.eof())
            exit(0);
        cout << "Field is empty or invalid. Please enter a valid phone number :" << endl;
    }
    cout << "His(her) darkest secret is..." << endl;
    while (!getline(cin, contact.getDarkest_Secret()) || contact.getDarkest_Secret().empty())
    {
        if (cin.eof())
            exit(0);
        cout << "Field is empty or invalid. Please enter a valid darkest secret : ";
    }
    cout << "Save his(her) Contact." << endl;

    if (i == 8)
        i = 0;
    pb.contact[i] = contact;
    i++;
    cout << "User " << i << " has been added successfully" << endl;
    welcomeScreen();
}

void    Search_contact(PhoneBook &pb)
{
    int id;
    int i;

    i = 0;
    id = 0;
    cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "firstName" << "|" << std::setw(10) << "lastName" << "|" << std::setw(10) <<"nickName";
    cout << "|" << endl;
    while (i < 8)
    {
        cout << "|" << std::setw(10) << i;
        cout << "|" << std::setw(10);
        print_value(pb.contact[id].getFirst_Name());
        cout << "|" << std::setw(10);
        print_value(pb.contact[id].getLast_Name());
        cout << "|" << std::setw(10);
        print_value(pb.contact[id].getNeck_Name());
        cout << "|" << endl;
        i++;
        id++;
    }

    cout<<"Enter The search index :"<< endl;
    string  id_search;
    cin >> id;
    if ((!std::getline(cin, id_search)))
    {
            cout << "Error input." << endl;
            return ;
    }
    if (id < 0 || id > 8)
        cout << "not find contact index! press Enter!!" << endl;
    else
    {
        cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "firstName" << "|" << std::setw(10) << "lastName" << "|" << std::setw(10) <<"nickName" << "|" << std::setw(10) <<"PNumber" << "|" << std::setw(10) <<"dSecret";
        cout << "|" << endl;
        cout << "|" << std::setw(10) << id;
        cout << "|" << std::setw(10);
        cout << pb.contact[id].getFirst_Name();
        cout << "|" << std::setw(10);
        cout << pb.contact[id].getLast_Name();
        cout << "|" << std::setw(10);
        cout << pb.contact[id].getNeck_Name();
        cout << "|" << std::setw(10);
        cout << pb.contact[id].getPhone_Number();
        cout << "|" << std::setw(10);
        cout << pb.contact[id].getDarkest_Secret();
        cout << "|" << endl;
    }
    cout << "Press Enter !!" << endl;
    cin.ignore();
    welcomeScreen();
}

int main()
{
    string  command;
    PhoneBook phone;

    welcomeScreen();
    while (1)
    {
        cout << ">>enter ur choise : ";
        if (!std::getline(cin, command))
            exit(0);
        if (!command.compare("ADD") || !command.compare("add"))
            Add_Contact(phone);
        else if (!command.compare("SEARCH") || !command.compare("search"))
            Search_contact(phone);
        else if (!command.compare("EXIT") || !command.compare("exit"))
        {
            cout << "exit program. " << endl;
            break;   
        }
        else
        {
            cout << "wrong intput. " << endl;
            welcomeScreen();
        }
    }
    return (0);
}