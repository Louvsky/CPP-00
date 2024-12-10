/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasqui <lgasqui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:01:10 by lgasqui           #+#    #+#             */
/*   Updated: 2024/12/10 10:40:38 by lgasqui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.class.hpp"

Contacts::Contacts(void)
{
	std::cout << "Constructor of Contacts called" << std::endl;
	return;
}
Contacts::~Contacts(void)
{
	std::cout << "Destructor of Contacts called" << std::endl;
	return;
}

void Contacts::first_name_input()
{
	while(FirstName.length() < 1)
	{
		std::cout << "First Name :";
		std::getline (std::cin, FirstName);
        if(std::cin.eof())
        {
            break;
        }
        bool valid = true;
        bool hasLetter = false;
        for (std::string::size_type i = 0; i < FirstName.length(); ++i)
        {
            if (std::isdigit(FirstName[i])) // Vérifie si un chiffre est présent
            {
                valid = false;
                break;
            }
            if (std::isalpha(FirstName[i])) // Vérifie si une lettre est présente
            {
                hasLetter = true;
            }
            if (!std::isprint(FirstName[i]))
            {
                valid = false;
                break;
            }
        }
        if (FirstName.empty() || !hasLetter || !valid)
        {
            std::cout << "Error: First name must contain at least one letter, "
                         "no numbers, and no invalid characters.\n";
            FirstName.clear();
        }
        else
        {
            break;
        }
	}
}
void Contacts::last_name_input()
{
	while(LastName.length() < 1)
	{
		std::cout << "Last Name :";
		std::getline (std::cin, LastName);
        if(std::cin.eof())
        {
            break;
        }
        bool valid = true;
        bool hasLetter = false;
        for (std::string::size_type i = 0; i < LastName.length(); ++i)
        {
            if (std::isdigit(LastName[i])) // Vérifie si un chiffre est présent
            {
                valid = false;
                break;
            }
            if (std::isalpha(LastName[i])) // Vérifie si une lettre est présente
            {
                hasLetter = true;
            }
            if (!std::isprint(LastName[i]))
            {
                valid = false;
                break;
            }
        }
        if (LastName.empty() || !hasLetter || !valid)
        {
            std::cout << "Error: Last name must contain at least one letter, "
                         "no numbers, and no invalid characters.\n";
            LastName.clear();
        }
        else
        {
            break;
        }
	}
}
void Contacts::nick_name_input()
{
	while(NickName.length() < 1)
	{
		std::cout << "Nick Name :";
		std::getline (std::cin, NickName);
        if(std::cin.eof())
        {
            break;
        }
        bool valid = true;
        bool hasLetter = false;
        for (std::string::size_type i = 0; i < NickName.length(); ++i)
        {
            if (std::isdigit(NickName[i])) // Vérifie si un chiffre est présent
            {
                valid = false;
                break;
            }
            if (std::isalpha(NickName[i])) // Vérifie si une lettre est présente
            {
                hasLetter = true;
            }
            if (!std::isprint(NickName[i]))
            {
                valid = false;
                break;
            }
            if (NickName.empty() || !hasLetter || !valid)
            {
                std::cout << "Error: Nick name must contain at least one letter, "
                         "no numbers, and no invalid characters.\n";
                NickName.clear();
            }
            else
            {
                break;
            }
        }

        if (!valid)
        {
            std::cout << "Error: Nickname contains non-printable characters.\n";
            NickName.clear(); // Réinitialise NickName pour forcer un nouvel essai
        }
	}
}

void Contacts::phone_number_input()
{
    while (true)
    {
        std::cout << "Phone Number : ";
        std::getline(std::cin, PhoneNumber);
        if(std::cin.eof())
        {
            break;
        }

        bool isNumeric = true;
		
        for (std::string::size_type i = 0; i < PhoneNumber.length(); ++i)
        {
            if (!std::isdigit(PhoneNumber[i]))
            {
                isNumeric = false;
                break;
            }
        }
        if (!isNumeric)
        {
            std::cout << "Error: The input must contain only digits.\n";
            continue;
        }
        if (PhoneNumber.length() < 10 || PhoneNumber.length() > 10)
        {
            std::cout << "Error, invalid phone number format 10 digits are required.\n";
            continue;
        }

        break;
    }
}

void Contacts::darkest_secret_input()
{
	while(DarkestSecret.length() < 1)
	{
		std::cout << "Darkest Secret :";
		std::getline (std::cin, DarkestSecret);
        if(std::cin.eof())
        {
            break;
        }
        bool valid = true;
        bool hasLetter = false;
        for (std::string::size_type i = 0; i < DarkestSecret.length(); ++i)
        {
            if (std::isdigit(DarkestSecret[i])) // Vérifie si un chiffre est présent
            {
                valid = false;
                break;
            }
            if (std::isalpha(DarkestSecret[i])) // Vérifie si une lettre est présente
            {
                hasLetter = true;
            }
            if (!std::isprint(DarkestSecret[i]))
            {
                valid = false;
                break;
            }
        }
        if (DarkestSecret.empty() || !hasLetter || !valid)
        {
            std::cout << "Error: Darkest Secret must contain at least one letter, "
                         "no numbers, and no invalid characters.\n";
            DarkestSecret.clear();
        }
        else
        {
            break;
        }
	}
}

const std::string &Contacts::getFirstName() const {
    return FirstName;
}

const std::string &Contacts::getLastName() const {
    return LastName;
}

const std::string &Contacts::getNickName() const {
    return NickName;
}

const std::string &Contacts::getPhoneNumber() const {
    return PhoneNumber;
}

const std::string &Contacts::getDarkestSecret() const {
    return DarkestSecret;
}



void Contacts::setFirstName(std::string str)
{
    FirstName = str;
}

void Contacts::setLastName(std::string str)
{
    LastName = str;
}

void Contacts::setNickName(std::string str)
{
    NickName = str;
}

void Contacts::setPhoneNumber(std::string str)
{
    PhoneNumber = str;
}

void Contacts::setDarkestSecret(std::string str)
{
    DarkestSecret = str;
}