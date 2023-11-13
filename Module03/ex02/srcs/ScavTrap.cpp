/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 03:49:18 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/12 22:50:27 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "Default ScavTrap" << this->_Name << " has entered the battle" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap " << this->_Name << " has enetered the battle" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap " << this->_Name << " is destroyed" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &scavTrap ): ClapTrap(scavTrap) {
	std::cout << "ScavTrap " << this->_Name << " is copied" << std::endl;
	*this = scavTrap;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap &rhs ) {
	std::cout << "ScavTrap assignation operator called from " << rhs._Name << std::endl;
	this->_Name = rhs._Name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;
	return *this;
}

void	ScavTrap::guardGate( void ) {
	std::cout << this->_Name << " is now in Gate keeper mode " << std::endl;
}

void	ScavTrap::attack( std::string const& target ) {
	if ( this->_EnergyPoints <= 0 ) {
		std::cout << "ScavTrap " << this->_Name << " is out of energy." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_Name << " attacks " << target << " at range, causing " << this->_AttackDamage << " points of damage !" << std::endl;
	this->_EnergyPoints -= 1;
}
