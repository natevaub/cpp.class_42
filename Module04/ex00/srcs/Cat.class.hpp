#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP

#include "Animal.class.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {
	public:
	Cat( void );
	~Cat( void );

	Cat( Cat const & rhs );
	Cat&	operator=( Cat const &rhs );

	void	makeSound( void ) const;
};

#endif