#ifndef ANIMAL_CLASS_HPP
#define ANIMAL_CLASS_HPP

#include <iostream>
#include <string>

class Animal {
	public:
	Animal( void );
	Animal( std::string type );
	virtual ~Animal( void );

	Animal( Animal const & src );
	Animal&	operator=( Animal const & rhs );

	virtual void	makeSound( void ) const;
	std::string		getType( void ) const;
	

	protected:
		std::string	_type;
};

#endif