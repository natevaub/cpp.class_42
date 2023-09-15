/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:23:35 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/12 13:02:16 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"

HumanA::HumanA( std::string name, Weapon &weapon) : _name(name), _weapon(weapon) { }

HumanA::~HumanA( void ) { }

void	HumanA::attack( void ) const {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}