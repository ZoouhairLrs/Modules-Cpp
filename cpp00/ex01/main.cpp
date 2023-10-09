/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:19:51 by zlaarous          #+#    #+#             */
/*   Updated: 2023/09/25 14:24:43 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contac.hpp"
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
	cout << "|";
	cout << "  ";

	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		cout << str << ".";
		cout << "  ";
	}
	else
	{
		cout <<str;
		cout << "  ";
	}
}

void    Add_Contact(Phone_Book &pb)
{
    Contact contact;
    static int i = 0;

    cin.ignore();
    cout << "His(her) first name is..." << endl;
	getline(cin, contact.first_Name);
	cout << "His(her) last name is..." << endl;
	getline(cin, contact.last_Name);
	cout << "His(her) neckname is..." << endl;
	getline(cin, contact.neck_Name);
	cout << "His(her) phone number is..." << endl;
	getline(cin, contact.phone_Number);
	cout << "His(her) darkest secret is..." << endl;
	getline(cin, contact.darkest_Secret);
	cout << "Save his(her) Contact." << endl;

    if (i == 8)
        i = 0;
    pb.contact[i++] = contact;
    cout << "User " << i << " has been added Successfully" << endl;
}

void    Search_contact(Phone_Book &pb)
{
    int id;
    int i;

    i = 0;
    cout<<"|index | firstName | lastName |  nickName | PNumber | dSecret";
    cout << "|" << endl;
    
    while (i < 8)
    {
        cout << "|  " << i;
		cout << "   ";
        print_value(pb.contact[i].first_Name);
        print_value(pb.contact[i].last_Name);
        print_value(pb.contact[i].neck_Name);
        print_value(pb.contact[i].phone_Number);
        print_value(pb.contact[i].darkest_Secret);
        cout << "|" << endl;
        i++;
    }
    cout<<"Enter The search index :"<<endl;
    cin >> id;
    if (id < 0 || id > 8)
        cout << "not find contact index!" << endl;
    else
    {
        cout<<"|index | firstName | lastName |  nickName | PNumber | dSecret";
        cout << "|" << endl;
        cout << "|  " << id;
		cout << "   ";
        print_value(pb.contact[id].first_Name);
        print_value(pb.contact[id].last_Name);
        print_value(pb.contact[id].neck_Name);
        print_value(pb.contact[id].phone_Number);
        print_value(pb.contact[id].darkest_Secret);
        cout << "|" << endl;
    }
}

int main()
{
    string  command;
    Phone_Book phone;

    while (1)
    {
        welcomeScreen();
        cout << ">>enter ur choise : ";
        cin >> command;
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
            cout << "wrong intput. " << endl;
    }
    return (0);
}