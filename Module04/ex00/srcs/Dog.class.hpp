
#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP

#include "Animal.class.hpp"
#include <iostream>
#include <string>

class Dog : public Animal {
	public:
	Dog( void );
	~Dog( void );

	void	makeSound( void ) const;
};

#endif