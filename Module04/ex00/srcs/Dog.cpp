#include "Dog.class.hpp"
#include <iostream>
#include <string>

Dog::Dog( void ) : Animal( "Dog" ) {
	std::cout << this->_type << " constructor called" << std::endl;
}

Dog::~Dog( void ) {
	std::cout << this->_type << " destructor called" << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof!" << std::endl;
}