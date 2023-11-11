/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:51:08 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/11 19:18:56 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.class.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name ), ScavTrap( name ), FragTrap( name )
{
	this->_Name = name;
	this->ClapTrap::_Name = name + "_clap_name";
	
	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
	
	std::cout << "# DiamondTrap # - " << this->_Name << " constructed." << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "# DiamondTrap # - " << this->_Name << " is dead." << std::endl;
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "DiamondTrap Name " << this->_Name << " -------------------";
	std::cout << " my ClapTrap name is " << ClapTrap::_Name << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &diamondTrap ) {
	std::cout << "# DiamondTrap # - " << this->_Name << " is copied" << std::endl;
	*this = diamondTrap;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap &rhs ) {
	std::cout << "# DiamondTrap # - assignation operator called from " << rhs._Name << std::endl;
	this->_Name = rhs._Name;
	this->ClapTrap::_Name = rhs._Name + "_clap_name";
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;
	return *this;
}