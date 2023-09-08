/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:43:18 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/07 18:56:01 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook phonebook(8);
	std::string	user_input;
	do {
		std::cout << "➕ ADD" << std::endl;
		std::cout << "🔎 SEARCH" << std::endl;
		std::cout << "❌ EXIT" << std::endl;
		std::getline(std::cin, user_input);
		if (user_input == "ADD") {
			phonebook.addContact();
		}
		else if (user_input == "SEARCH") {
			phonebook.searchContact();
		}
		else if (user_input == "EXIT") {
			std::cout << "❗PhoneBook Closed all contacts are lost❗" << std::endl;
		}
		else {
			std::cout << "😕 WARNING: Invalid Command" << std::endl;
			std::cout << "😉 Try Again with (ADD, SEARCH, EXIT)" << std::endl;
		}
	} while (user_input != "EXIT" && !std::cin.eof());
	return 0;
}

