/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:19:51 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/29 13:20:49 by zlaarous         ###   ########.fr       */
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
bool ContainsSpaceOrTab(const string &str)
{
    for (size_t i = 0; i < str.length(); i++) {
        if (str[i] == ' ' || str[i] == '\t') {
            return true;
        }
    }
    return false;
}

void    Add_Contact(PhoneBook &pb)
{
    static int i = 0;
    Contact contact;
    string  input;

    while (true) {
        std::cout << "Enter a valid first name: ";
        if (!getline(std::cin, input) || input.empty() || ContainsSpaceOrTab(input)) {
            if (std::cin.eof())
                exit(0);
            std::cout << "Field is empty or invalid. Please enter a valid first name." << std::endl;
        } else {
            contact.setFirst_Name(input);
            break;
        }
    }

    while (true) {
        std::cout << "Enter a valid last name: ";
        if (!getline(std::cin, input) || input.empty() || ContainsSpaceOrTab(input)) {
            if (std::cin.eof())
                exit(0);
            std::cout << "Field is empty or invalid. Please enter a valid last name." << std::endl;
        } else {
            contact.setLast_Name(input);
            break;
        }
    }

    while (true) {
        std::cout << "Enter a valid neck name: ";
        if (!getline(std::cin, input) || input.empty() || ContainsSpaceOrTab(input)) {
            if (std::cin.eof())
                exit(0);
            std::cout << "Field is empty or invalid. Please enter a valid neck name." << std::endl;
        } else {
            contact.setNeck_Name(input);
            break;
        }
    }

    while (true) {
        std::cout << "Enter a valid phone number : ";
        if (!getline(std::cin, input) || input.empty() || ContainsSpaceOrTab(input)) {
            if (std::cin.eof())
                exit(0);
            std::cout << "Field is empty or invalid. Please enter a valid phone number." << std::endl;
        } else {
            contact.setPhone_Number(input);
            break;
        }
    }

    while (true) {
        std::cout << "Enter a valid darkest secret: ";
        if (!getline(std::cin, input) || input.empty() || ContainsSpaceOrTab(input)) {
            if (std::cin.eof())
                exit(0);
            std::cout << "Field is empty or invalid. Please enter a valid darkest secret." << std::endl;
        } else {
            contact.setDarkest_Secret(input);
            break;
        }
    }
    cout << "Save his(her) Contact." << endl;

    if (i == 8)
        i = 0;
    pb.contact[i] = contact;
    i++;
    cout << "User " << i << " has been added successfully." << endl;
    cout << "press any key for next step!";
}

void    Search_contact(PhoneBook &pb)
{
    int id;
    int i;

    i = 0;
    cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "firstName" << "|" << std::setw(10) << "lastName" << "|" << std::setw(10) <<"nickName";
    cout << "|" << endl;
    while (i < 8)
    {
        cout << "|" << std::setw(10) << i;
        cout << "|" << std::setw(10);
        print_value(pb.contact[i].getFirst_Name());
        cout << "|" << std::setw(10);
        print_value(pb.contact[i].getLast_Name());
        cout << "|" << std::setw(10);
        print_value(pb.contact[i].getNeck_Name());
        cout << "|" << endl;
        i++;
    }

    cout<<"Enter The search index :"<< endl;
    string s = "";
    cin >> s;
    if(s.empty() || s.find_first_of("0123456789"))
    {
        cout << "inalide index !" << endl;
        return ;
    }
    id = atoi(s.c_str());
    if (id < 0 || id > 7){
        cout << "not find contact index! press Enter!!\n";
        return ;
    }
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
}

int main()
{
    string  command;
    PhoneBook phone;

    while (1)
    {
        welcomeScreen();
        cin.clear();
        cout << ">>enter ur choise : ";
        getline(cin, command);
        if (std::cin.eof())
            exit(0);
        if (!command.compare("ADD") || !command.compare("add"))
            Add_Contact(phone);
        else if (!command.compare("SEARCH") || !command.compare("search"))
            Search_contact(phone);
        else if (!command.compare("EXIT") || !command.compare("exit"))
        {
            cout << "exit program." << endl;
            break;   
        }
        else {
            cout << "invalid command." << endl;
            cout << "Enter any key for next step !" << endl;
        }
        cin.ignore();
    }
    return (0);
}