/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasqui <lgasqui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:01:07 by lgasqui           #+#    #+#             */
/*   Updated: 2024/12/05 11:23:42 by lgasqui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_CLASS_H
# define CONTACTS_CLASS_H

#include <string>
#include <iostream>

class Contacts
{
	
	public:
	
	Contacts(void);
	~Contacts(void);
	
	void first_name_input();
	void last_name_input();
	void nick_name_input();
	void phone_number_input();
	void darkest_secret_input();
	
	const std::string &getFirstName() const;
    const std::string &getLastName() const;
    const std::string &getNickName() const;
    const std::string &getPhoneNumber() const;
    const std::string &getDarkestSecret() const;

	void setFirstName(std::string);
    void setLastName(std::string);
    void setNickName(std::string);
    void setPhoneNumber(std::string);
    void setDarkestSecret(std::string);
	
	private :
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	DarkestSecret;
	std::string	PhoneNumber;
	
	

};

#endif