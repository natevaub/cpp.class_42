/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:43:08 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/06 20:12:42 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>

PhoneBook::PhoneBook(void) : _maxContacts(8), _nbContact(0) { }

PhoneBook::PhoneBook(int maxContacts) : _maxContacts(_maxContacts), _nbContact(0) { }

PhoneBook::~PhoneBook(void) {
	std::cout << "-- Exit --" << std::endl;
}

void	PhoneBook::addContact(void) {
	Contact	contact;

	std::cout << "Add Contact" << std::endl;
	std::string	user_input;

	/* Set First Name */
	do {
		std::cout << "First Name : ";
		std::getline(std::cin, user_input);
		if (user_input.empty())
			std::cout << "First Name cannot be empty" << std::endl;
		else
			contact.setFirstName(user_input);
	} while (user_input.empty());

	/* Set Last Name */
	do {
		std::cout << "Last Name : ";
		std::getline(std::cin, user_input);
		if (user_input.empty())
			std::cout << "Last Name cannot be empty" << std::endl;
		else
			contact.setLastName(user_input);
	} while (user_input.empty());

	/* Set Nick Name */
	do {
		std::cout << "Nick Name : ";
		std::getline(std::cin, user_input);
		if (user_input.empty())
			std::cout << "Nick Name cannot be empty" << std::endl;
		else
			contact.setNickName(user_input);
	} while (user_input.empty());

	/* Set Phone Number */
	do {
		std::cout << "Phone Number : ";
		std::getline(std::cin, user_input);
		if (user_input.empty())
			std::cout << "Phone Number cannot be empty" << std::endl;
		else
			contact.setPhoneNumber(user_input);
	} while (user_input.empty());

	/* Set Darkest Secret */
	do {
		std::cout << "Darkest Secret : ";
		std::getline(std::cin, user_input);
		if (user_input.empty())
			std::cout << "Darkest Secret cannot be empty" << std::endl;
		else
			contact.setDarkestSecret(user_input);
	} while (user_input.empty());

	this->_contacts[this->_nbContact] = contact;
	this->_nbContact++;
	std::cout << "✅ Contact added!" << std::endl;
	std::cout << "📔 PhoneBook (" << this->_nbContact << "/" << this->_maxContacts << ")" << std::endl;
}