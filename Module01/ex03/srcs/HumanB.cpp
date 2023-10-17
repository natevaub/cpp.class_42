/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:23:51 by nvaubien          #+#    #+#             */
/*   Updated: 2023/10/17 14:46:10 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.class.hpp"
#include <iostream>

HumanB::HumanB( std::string name) : _name(name), _weapon(NULL) { }

HumanB::~HumanB( void ) { }

void	HumanB::attack( void ) const {
	if (this->_weapon == NULL)
		std::cout << this->_name << " attacks with their bare hands" << std::endl;
	else if (this->_weapon->getType() == "")
		std::cout << this->_name << " attacks with their bare hands" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon ) {
	this->_weapon = &weapon;
}