/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasqui <lgasqui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:01:25 by lgasqui           #+#    #+#             */
/*   Updated: 2024/12/05 12:03:29 by lgasqui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contacts.class.hpp"

class Phonebook {
	
public:
	
	Phonebook(void);
	~Phonebook(void);
	
	void addContact();
    void searchContacts() const;
	
private:
	Contacts contacts[8];
	
	int total_contacts;
	
	void displayContactSummary(int index) const;
    void displayContactDetails(int index) const;
    std::string truncateString(const std::string &str, size_t length) const;
	int onlyDigit(const std::string &str) const;
	
};

#endif