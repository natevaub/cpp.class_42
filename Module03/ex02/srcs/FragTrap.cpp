#include "FragTrap.class.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap " << this->_Name << " is destroyed" << std::endl;
}

FragTrap::FragTrap( const FragTrap &FragTrap) {
	std::cout << "FragTrap " << this->_Name << " has entered the battle" << std::endl;
	*this = FragTrap;
}

FragTrap& FragTrap::operator=( const FragTrap &rhs ) {
	std::cout << "FragTrap assignation operator called from " << rhs._Name << std::endl;
	this->_Name = rhs._Name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;
	return *this;
}