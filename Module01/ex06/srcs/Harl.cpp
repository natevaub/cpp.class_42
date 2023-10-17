/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:37:08 by nvaubien          #+#    #+#             */
/*   Updated: 2023/10/17 14:16:15 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"
#include <iostream>

Harl::Harl( void ) { }

Harl::~Harl( void ) { }

void	Harl::complain(std::string level)
{
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*tab[4]) (void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int			lvl = -1;

	for (int i = 0; i < 4; i++)
	{
		if (str[i] == level)
			lvl = i;
	}

	switch (lvl)
	{
		case 0:
		{
			(this->*tab[0])();
		}
		case 1:
		{
			(this->*tab[1])();
		}
		case 2:
		{
			(this->*tab[2])();
		}
		case 3:
		{
			(this->*tab[3])();
		}
		break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
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
