/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasqui <lgasqui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:01:13 by lgasqui           #+#    #+#             */
/*   Updated: 2024/12/05 14:31:24 by lgasqui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include <iostream>

int main() {
    Phonebook phonebook;
    std::string command;

    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if(std::cin.eof())
        {
            break;
        }

        if (command == "ADD") {
            phonebook.addContact();
        } else if (command == "SEARCH") {
            phonebook.searchContacts();
        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Unknown command. Please try again." << std::endl;
        }
    }

    return 0;
}