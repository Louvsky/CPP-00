/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasqui <lgasqui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:01:19 by lgasqui           #+#    #+#             */
/*   Updated: 2024/12/05 15:02:20 by lgasqui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "Phonebook.class.hpp"
#include "stdio.h"
#include <cstdlib>

Phonebook::Phonebook(void) : total_contacts(0)
{
	std::cout << "Constructor of Phonebook called" << std::endl;
	return;
}
Phonebook::~Phonebook(void)
{
	std::cout << "Destructor of Phonebook called" << std::endl;
	return;
}

void Phonebook::addContact()
{
    static int index = 0;
    
    contacts[index].setFirstName("");
    contacts[index].first_name_input();
    contacts[index].setLastName("");
    contacts[index].last_name_input();
    contacts[index].setNickName("");
    contacts[index].nick_name_input();
    contacts[index].setPhoneNumber("");
    contacts[index].phone_number_input();
    contacts[index].setDarkestSecret("");
    contacts[index].darkest_secret_input();


    if(index == 7)
    {
        index = 0;
        total_contacts = 8;
    }
    else
    {
        if(total_contacts < 8)
        {
            total_contacts++;
        }
        index++;
    }
}


void Phonebook::searchContacts() const
{
    if (total_contacts == 0)
    {
        std::cout << "No contacts in the phonebook." << std::endl;
        return;
    }


    std::cout << "-------------------------------------" << std::endl;
    std::cout << "| Index  | First Name | Last Name  | Nickname   |" << std::endl;
    std::cout << "-------------------------------------" << std::endl;

    for (int index = 0; index < total_contacts ; index++)
    {
        displayContactSummary(index);
    }
    std::cout << "-------------------------------------" << std::endl;

    std::cout << "Enter the index of the contact to view details: ";
    std::string input;
    std::cin >> input;

    // Validation stricte de l'entrée
    if (!onlyDigit(input) || std::atoi(input.c_str()) < 0 || std::atoi(input.c_str()) >= total_contacts) {
    std::cout << "Invalid input." << std::endl;
    return;
    }

    int index = std::atoi(input.c_str());
    displayContactDetails(index);
}

int Phonebook::onlyDigit(const std::string &str) const
{
    for (size_t i = 0; i < str.size(); ++i)
    {
        if (!std::isdigit(str[i]))
            return 0;
    }
    return 1;
}

// Afficher le résumé d'un contact
void Phonebook::displayContactSummary(int index) const
{

  if (index >= total_contacts) {
        // Ne rien afficher si le contact à cet index n'existe pas
        std::cout << "| " << std::setw(6) << index << " | "
                  << std::setw(10) << " " << " | "
                  << std::setw(10) << " " << " | "
                  << std::setw(10) << " " << " |" << std::endl;
        return;
    }

    std::cout << "| " << std::setw(6) << index << " | ";
    std::cout << std::setw(10) << truncateString(contacts[index].getFirstName(), 10) << " | ";
    std::cout << std::setw(10) << truncateString(contacts[index].getLastName(), 10) << " | ";
    std::cout << std::setw(10) << truncateString(contacts[index].getNickName(), 10) << " |" << std::endl;

}
// Afficher les détails d'un contact
void Phonebook::displayContactDetails(int index) const {
    std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;

}

// Troncature d'une chaîne de caractères
std::string Phonebook::truncateString(const std::string &str, size_t length) const {
    if (str.length() > length) {
        return str.substr(0, length - 1) + ".";
    }
    return str;
}