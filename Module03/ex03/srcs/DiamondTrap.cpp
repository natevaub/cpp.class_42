#include "DiamondTrap.class.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(), FragTrap(), ScavTrap() {
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
}