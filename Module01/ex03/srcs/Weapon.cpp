/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:18:17 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/12 13:05:57 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"

Weapon::Weapon( void ) { }

Weapon::Weapon( std::string type ) : _type(type) { }

Weapon::~Weapon ( void ) { }

std::string	Weapon::getType( void ) const {
	return (this->_type);
}

void	Weapon::setType( std::string type ) {
	this->_type = type;
}