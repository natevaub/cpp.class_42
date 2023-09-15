/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:37:08 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/15 15:16:26 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"
#include <iostream>

Harl::Harl( void ) { }

Harl::~Harl( void ) { }

void	Harl::complain( std::string complain) {
	std::string arr[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*ptr[4])() = { &Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	int i = 0;
	while ( i < 4 ) {
		if (complain == arr[i])
			break;
		i++;
	}

	switch( i ) {
		case 0:
			(this->*ptr[0])();
		case 1:
			(this->*ptr[1])();
		case 2:
			(this->*ptr[2])();
		case 3:
			(this->*ptr[3])();
			break ;
		default:
			std::cout << "Probably complaining about insignificant problems" << std::endl;

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
