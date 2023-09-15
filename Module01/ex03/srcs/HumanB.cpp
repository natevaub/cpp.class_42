/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:23:51 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/12 13:02:22 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.class.hpp"
#include <iostream>

HumanB::HumanB( std::string name) : _name(name), _weapon(NULL) { }

HumanB::~HumanB( void ) { }

void	HumanB::attack( void ) const {
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon ) {
	this->_weapon = &weapon;
}