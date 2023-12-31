/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:39:57 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/12 01:26:49 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"
#include <iostream>
#include <string>

Cat::Cat( void ) : Animal( "Cat" ) {
	std::cout << this->_type << " constructor called" << std::endl;
}

Cat::~Cat( void ) {
	std::cout << this->_type << " destructor called" << std::endl;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meow" << std::endl;
}

Cat::Cat( Cat const &rhs ) : Animal( "Cat" ) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = rhs;
}

Cat&	Cat::operator=( Cat const &rhs ) {
	std::cout << "Cat assignment operator called" << std::endl;
	if ( this != &rhs ) {
		this->_type = rhs.getType();
	}
	return *this;
}
