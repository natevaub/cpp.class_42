/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 03:43:34 by nvaubien          #+#    #+#             */
/*   Updated: 2023/10/16 19:20:24 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap( void ):
	_Name( "Darius "), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap " << this->_Name << " is born " << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap " << this->_Name << " is destroyed " << std::endl;
}

ClapTrap::ClapTrap( std::string name ):
	_Name( name ), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap " << this->_Name << " is born " << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &clapTrap ) {
	std::cout << "ClapTrap " << this->_Name << " is copied" << std::endl;
	*this = clapTrap;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap &rhs ) {
	std::cout << "ClapTrap assignation operator called from " << rhs._Name << std::endl;
	this->_Name = rhs._Name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;
	return *this;
}

void	ClapTrap::attack( const std::string& target) {
	if (_EnergyPoints <= 0) {
		std::cout << "ClapTrap " << _Name << " is out of energy" << std::endl;
		return;
	}
	std::cout << "ClapTrap" << _Name << " attacks " << target;
	std::cout << ", causing " << _AttackDamage << " points of damage!" << std::endl;
	_EnergyPoints -= 1;
}


void	ClapTrap::takeDamage( unsigned int amount ) {
	if (_HitPoints > 0)
	{
		if (_HitPoints - amount <= 0) {
			_HitPoints = 0;
			std::cout << "ClapTrap " << this->_Name << " took " << _HitPoints << "damage from " << _Name;
			std::cout << "ClapTrap " << this->_Name << " he is dead" << std::endl;
		}
			
		else if (_HitPoints - amount > 0) {
			_HitPoints -= amount;
			std::cout << "ClapTrap " << this->_Name << " took " << amount << " damage : " << std::endl;
		}
	}
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (_HitPoints <= 0) {
		std::cout << "ClapTrap " << this->_Name << " is out of energy" << std::endl;
	}
	_EnergyPoints += amount;
	std::cout << "ClapTrap " << this->_Name << " has been repaired by " << amount << " points" << std::endl;
}
