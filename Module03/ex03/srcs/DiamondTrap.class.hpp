#ifndef DIAMONTRAP_CLASS_HPP
#define DIAMONTRAP_CLASS_HPP

#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap( std::string name );
		~DiamondTrap( void );

		DiamondTrap( const DiamondTrap &diamondTrap );
		DiamondTrap	&operator=( const DiamondTrap &rhs);

		using	ScavTrap::attack;
		void	whoAmI( void );

	private:
		std::string _Name;
};

#endif
