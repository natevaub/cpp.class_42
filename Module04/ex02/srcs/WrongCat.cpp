#include "WrongCat.class.hpp"
#include "WrongAnimal.class.hpp"

#include <iostream>
#include <string>

WrongCat::WrongCat( void ) : WrongAnimal( "WrongCat" ) {
	std::cout << this->_type << " constructor called" << std::endl;
}

WrongCat::~WrongCat( void ) {
	std::cout << this->_type << " destructor called" << std::endl;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Meow" << std::endl;
}