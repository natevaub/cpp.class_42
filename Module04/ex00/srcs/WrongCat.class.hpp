#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.class.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal {
	public:
		WrongCat( void );
		~WrongCat( void );

		void	makeSound( void ) const;
};

#endif