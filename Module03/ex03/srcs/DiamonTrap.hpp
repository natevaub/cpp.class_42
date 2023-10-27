#ifndef DIAMONTRAP_HPP
#define DIAMONTRAP_HPP

#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
	private:
		std::string _name;
};

#endif
