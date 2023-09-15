/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:52:53 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/11 16:13:40 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie( void ) { }

Zombie::~Zombie( void ) {
	std::cout << getName() << " is destroyed " << std::endl;
}

void	Zombie::setName( std::string name ) {
	this->_name = name;
}

std::string	Zombie::getName( void ) const {
	return (this->_name);
}

void	Zombie::announce( void ) const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}