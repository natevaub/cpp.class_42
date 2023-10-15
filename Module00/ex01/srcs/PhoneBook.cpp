/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:43:08 by nvaubien          #+#    #+#             */
/*   Updated: 2023/10/15 04:58:10 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>
#include <sstream>

PhoneBook::PhoneBook(void) : _maxContacts(8), _nbContact(0) { }

PhoneBook::PhoneBook(int maxContacts) : _maxContacts(maxContacts), _nbContact(0) { }

PhoneBook::~PhoneBook(void) {
	std::cout << "See you next time! " << std::endl;
}

/**
 * Check if a string contains only digits
 * 
 * @param str string to be checked for containing only digits
 * @return true if the string contains only digits, false otherwise.
*/
bool	digitOnly(std::string str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (str[i] < '0' || str[i] > '9')
			return false;
	}
	return true;
}

/**
 * Format a string to a fixed length
 * 
 * @param str string to be formatted
 * @return The formated string with a length of 10 characters.
*/
std::string	formatString(std::string str) {
	std::string	formatedString;

	if (str.length() > 10)
	{
		formatedString = str.substr(0, 9);
		formatedString.append(".");
	}
	else
	{
		formatedString = str;
		for (int i = 0; i < 10 - (int)str.length(); i++) {
			formatedString.insert(0, " ");
		}

	}
	return	(formatedString);
}

/**
 * Display the contact information by index
 * 
 * This function allows the use to search for a contact by specifying its index.
*/
void	PhoneBook::displayByIndex(void) const {
	std::cout << "🔎 Find Contact : " << std::endl;
	std::string	user_input;

	do {
		std::cout << "Index (q to quit) : ";
		std::getline(std::cin, user_input);
		if (user_input.empty())
			std::cout << "Index cannot be empty" << std::endl;
		else if (digitOnly(user_input)) {
			std::stringstream iss(user_input);
			int	index;
			iss >> index;
			if (index < 0 || index >= this->_nbContact)
				std::cout << "Index is out of range" << std::endl;
			else {
				std::cout << "Contact successfully found" << std::endl;
				std::cout << "First Name : " << this->_contacts[index].getFirstName() << std::endl;
				std::cout << "Last Name : " << this->_contacts[index].getLastName() << std::endl;
				std::cout << "Nick Name : " << this->_contacts[index].getNickName() << std::endl;
				std::cout << "Phone Number : " << this->_contacts[index].getPhoneNumber() << std::endl;
				std::cout << "Darkest Secret : " << this->_contacts[index].getDarkestSecret() << std::endl;
			}
		}
		else if (user_input != "q")
			std::cout << "Error index must be a number " << std::endl;
	} while (user_input != "q" && !std::cin.eof());
}

/**
 * Add a contact to the phonebook
 * 
 * This function allows the user to add a contact to the phonebook by providing its information.
*/
void	PhoneBook::addContact(void) {
	Contact	contact;

	std::cout << "✔️ Add Contact" << std::endl;
	std::string	user_input;

	do {
		std::cout << "First Name : ";
		std::getline(std::cin, user_input);
		if (user_input.empty())
			std::cout << "First Name cannot be empty" << std::endl;
		else
			contact.setFirstName(user_input);
	} while (user_input.empty() && !std::cin.eof());

	do {
		std::cout << "Last Name : ";
		std::getline(std::cin, user_input);
		if (user_input.empty())
			std::cout << "Last Name cannot be empty" << std::endl;
		else
			contact.setLastName(user_input);
	} while (user_input.empty() && !std::cin.eof());

	do {
		std::cout << "Nick Name : ";
		std::getline(std::cin, user_input);
		if (user_input.empty())
			std::cout << "Nick Name cannot be empty" << std::endl;
		else
			contact.setNickName(user_input);
	} while (user_input.empty() && !std::cin.eof());

	do {
		std::cout << "Phone Number : ";
		std::getline(std::cin, user_input);
		if (user_input.empty())
			std::cout << "Phone Number cannot be empty" << std::endl;
		else
			contact.setPhoneNumber(user_input);
	} while (user_input.empty() && !std::cin.eof());

	do {
		std::cout << "Darkest Secret : ";
		std::getline(std::cin, user_input);
		if (user_input.empty())
			std::cout << "Darkest Secret cannot be empty" << std::endl;
		else
			contact.setDarkestSecret(user_input);
	} while (user_input.empty() && !std::cin.eof());

	if (this->_nbContact == this->_maxContacts) {
		std::cout << "⚠️ PhoneBook is full, contact will replace the oldest one!" << std::endl;

		for (int i = 0; i < this->_maxContacts; i++) {
			if (i == this->_maxContacts - 1)
				this->_contacts[i] = contact;
			else
				this->_contacts[i] = this->_contacts[i + 1];
		}
	}
		
	else {
		this->_contacts[this->_nbContact] = contact;
		this->_nbContact++;
	}

	std::cout << "✅ Contact added!" << std::endl;
	std::cout << "📔 PhoneBook (" << this->_nbContact << "/" << this->_maxContacts << ")" << std::endl;
}

/**
 * Display a list of all the contacts in the phonebook.
 * 
 * This function displays a list of contact with their informations.
*/
void	PhoneBook::searchContact(void) const {
	std::cout << "Contacts : "<< std::endl;
	std::cout << "|     Index|First Name| Last Name| Nick Name|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	for (int i = 0; i < this->_nbContact; i++) {
		std::stringstream	index_str;
		index_str << i;
		std::cout << "|" << formatString(index_str.str()) << "|";
		std::cout << formatString(this->_contacts[i].getFirstName()) << "|";
		std::cout << formatString(this->_contacts[i].getLastName()) << "|";
		std::cout << formatString(this->_contacts[i].getNickName()) << "|";
		std::cout << std::endl;
	}

	displayByIndex();
}

