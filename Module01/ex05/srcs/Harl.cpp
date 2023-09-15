/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:36:31 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/14 23:51:02 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

Harl::Harl( void ) { }

Harl::~Harl( void ) { }

void	Harl::_debug( void ) {
	std::cout << "DEBUG" << std::endl;
}

void	Harl::_info( void ) {
	std::cout << "INFO" << std::endl;
}

void	Harl::_warning( void ) {
	std::cout << "WARNING" << std::endl;
}

void	Harl::_error( void ) {
	std::cout << "ERROR" << std::endl;
}