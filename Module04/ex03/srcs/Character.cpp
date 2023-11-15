/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:43:43 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/15 17:08:10 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"
#include "ICharacter.class.hpp"
#include <iostream>
#include <string>

Character::Character( std::string name ) : _name( name ) {
	std::cout << "Character " << this->_name << " created" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::~Character( void ) {
	std::cout << "Character " << this->_name << " destroyed" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL) {
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
}

Character::Character( Character const &rhs ) {
	std::cout << "Character copy constructor called" << std::endl;
	*this = rhs;
}

Character&	Character::operator=( Character const &rhs ) {
	std::cout << "Character assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++) {
			this->_inventory[i] = rhs._inventory[i];
		}
	}
	return *this;
}

std::string const & Character::getName() const {
	return this->_name;
}

void	Character::equip( AMateria* m ) {
	if (m == NULL) {
		std::cout << "Character " << this->_name << " can't equip NULL materia" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			std::cout << "Character " << this->_name << " equiped with " << m->getType() << " at index " << i << std::endl;
			return;
		}
	}
	std::cout << "Character " << this->_name << " can't equip " << m->getType() << " materia" << std::endl;
}

void	Character::unequip( int idx ) {
	if (this->_inventory[idx] != NULL) {
		delete this->_inventory[idx];
		this->_inventory[idx] = NULL;
		std::cout << "Character " << this->_name << " unequiped at index " << idx << std::endl;
		return;
	}
	std::cout << "Character " << this->_name << " has nothing to unequip at index " << idx << std::endl;
}

void	Character::use( int idx, ICharacter& target ) {
	if (this->_inventory[idx] != NULL) {
		this->_inventory[idx]->use(target);
		std::cout << "Character " << this->_name << " used " << this->_inventory[idx]->getType() << " on " << target.getName() << std::endl;
		return;
	}
	else {
		std::cout << "Character " << this->_name << " has nothing to use at index " << idx << std::endl;
	}
}