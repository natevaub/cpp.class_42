/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:43:18 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/06 20:19:02 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook phonebook(8);

	do {
		std::string	user_input;

		std::cout << "Welcome user! Here are the 3 functions at your disposal" << std::endl;
		std::cout << "ADD --- SEARCH --- EXIT" << std::endl;
		std::getline(std::cin, user_input);
		if (user_input == "ADD") {
			phonebook.addContact();
		}
		else if (user_input == "SEARCH") {
			phonebook.searchContact();
		}
		else if (user_input == "EXIT") {
			std::cout << "Exit" << std::endl;
		}
		else {
			std::cout << "WARNING: Invalid Command" << std::endl;
		}
	}
}

