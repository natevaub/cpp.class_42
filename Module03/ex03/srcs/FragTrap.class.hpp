#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <iostream>
#include "ClapTrap.class.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap( void );
		FragTrap( std::string name );
		~FragTrap( void );

		FragTrap( const FragTrap &fragTrap );
		FragTrap	&operator=( const FragTrap &rhs);

		void	highFivesGuys( void );
};

#endif