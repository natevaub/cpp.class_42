/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 03:43:34 by nvaubien          #+#    #+#             */
/*   Updated: 2023/10/14 03:43:36 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap( void ):
	_Name( "Darius "), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << this->_Name << "has entered the battle" << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ):
	_Name( name ), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << this->_Name << "has entered the battle" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &clapTrap ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = clapTrap;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap &rhs ) {
	this->_Name = rhs._Name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;
	return *this;
}

void	ClapTrap::attack( const std::string& target) {
	if (_EnergyPoints <= 0) {
		std::cout << _Name << " is out of energy" << std::endl;
		return;
	}
	std::cout << _Name << " attacks " << target;
	std::cout << ", causing " << _AttackDamage << " points of damage!" << std::endl;
	_EnergyPoints -= 1;
}


void	ClapTrap::takeDamage( unsigned int amount ) {
	if (_HitPoints > 0)
	{
		if (_HitPoints - amount <= 0) {
			_HitPoints = 0;
			std::cout << this->_Name << "took " << _HitPoints << "damage from " << _Name;
			std::cout << this->_Name << "He is dead" << std::endl;
		}
			
		else if (_HitPoints - amount > 0) {
			_HitPoints -= amount;
			std::cout << this->_Name << "took " << amount << "damage : " << std::endl;
		}
	}
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (_HitPoints <= 0) {
		std::cout << this->_Name << " is out of energy" << std::endl;
	}
	_EnergyPoints += amount;
	std::cout << this->_Name << "has been repaired by " << amount << " points" << std::endl;
}
