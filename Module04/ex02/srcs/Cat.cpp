/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:39:57 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/15 01:12:15 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"
#include "AAnimal.class.hpp"
#include "Brain.class.hpp"
#include <iostream>
#include <string>

Cat::Cat( void ) : Animal( "Cat" ) {
	std::cout << this->_type << " constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat( void ) {
	std::cout << this->_type << " destructor called" << std::endl;
	delete this->_brain;
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
		delete this->_brain;
		this->_brain = new Brain( *rhs._brain );
	}
	return *this;
}

Brain *Cat::getBrain( void ) const {
	return this->_brain;
}