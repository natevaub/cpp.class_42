/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:30:08 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/11 13:36:33 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void ) { }

Zombie::~Zombie( void ) {
	std::cout << getName() << " is destroyed " << std::endl;
}

void	Zombie::setName( std::string name) {
	this->_name = name;
}

std::string	Zombie::getName( void ) const {
	return (this->_name);
}

void	Zombie::announce( void ) const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
