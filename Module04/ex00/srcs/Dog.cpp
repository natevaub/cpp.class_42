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

Dog::Dog( Dog const &rhs ) : Animal( "Dog" ) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = rhs;
}

Dog&	Dog::operator=( Dog const &rhs ) {
	std::cout << "Dog assignment operator called" << std::endl;
	if ( this != &rhs ) {
		this->_type = rhs.getType();
	}
	return *this;
}