/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:36:31 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/15 14:12:04 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

Harl::Harl( void ) { }

Harl::~Harl( void ) { }

void	Harl::complain( std::string complain) {
	std::string	arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void	(Harl::*ptr[4])( void ) = { &Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error };
	
	for (int i = 0; i < 4; i++) {
		if (complain == arr[i]) {
			(this->*ptr[i])();
		}
	}
}

void	Harl::_debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Debug message" << std::endl;
}

void	Harl::_info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "Info message" << std::endl;
}

void	Harl::_warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "Warning message" << std::endl;
}

void	Harl::_error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Error message" << std::endl;
}