/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasqui <lgasqui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:01:10 by lgasqui           #+#    #+#             */
/*   Updated: 2024/12/05 15:14:54 by lgasqui          ###   ########.fr       */
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
        bool valid = true;
        for (std::string::size_type i = 0; i < FirstName.length(); ++i)
        {
            if (!std::isprint(FirstName[i]))
            {
                valid = false;
                break;
            }
        }

        if (!valid)
        {
            std::cout << "Error: Firstname contains non-printable characters.\n";
            FirstName.clear(); // Réinitialise NickName pour forcer un nouvel essai
        }
	}
}
void Contacts::last_name_input()
{
	while(LastName.length() < 1)
	{
		std::cout << "Last Name :";
		std::getline (std::cin, LastName);
        bool valid = true;
        for (std::string::size_type i = 0; i < LastName.length(); ++i)
        {
            if (!std::isprint(LastName[i]))
            {
                valid = false;
                break;
            }
        }

        if (!valid)
        {
            std::cout << "Error: Lastname contains non-printable characters.\n";
            LastName.clear(); // Réinitialise NickName pour forcer un nouvel essai
        }
	}
}
void Contacts::nick_name_input()
{
	while(NickName.length() < 1)
	{
		std::cout << "Nick Name :";
		std::getline (std::cin, NickName);
        bool valid = true;
        for (std::string::size_type i = 0; i < NickName.length(); ++i)
        {
            if (!std::isprint(NickName[i]))
            {
                valid = false;
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
    //while (true)
    //{
        std::cout << "Phone Number : ";
        std::getline(std::cin, PhoneNumber);

        // bool isNumeric = true;
		
        // for (std::string::size_type i = 0; i < PhoneNumber.length(); ++i)
        // {
        //     if (!std::isdigit(PhoneNumber[i]))
        //     {
        //         isNumeric = false;
        //         break;
        //     }
        // }
        // if (!isNumeric)
        // {
        //     std::cout << "Error: The input must contain only digits.\n";
        //     continue;
        // }
        // if (PhoneNumber.length() < 10 || PhoneNumber.length() > 10)
        // {
        //     std::cout << "Error, invalid phone number format 10 digits are required.\n";
        //     continue;
        // }

        // break;
   // }
}

void Contacts::darkest_secret_input()
{
	while(DarkestSecret.length() < 1)
	{
		std::cout << "Darkest Secret :";
		std::getline (std::cin, DarkestSecret);
        bool valid = true;
        for (std::string::size_type i = 0; i < DarkestSecret.length(); ++i)
        {
            if (!std::isprint(DarkestSecret[i]))
            {
                valid = false;
                break;
            }
        }

        if (!valid)
        {
            std::cout << "Error: Darkest Secret contains non-printable characters.\n";
            DarkestSecret.clear(); // Réinitialise NickName pour forcer un nouvel essai
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