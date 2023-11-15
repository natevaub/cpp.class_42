/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:00:13 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/14 21:41:09 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include <iostream>
#include <string>

Animal::Animal( void ) : _type( "Animal" ) {
	std::cout << "Animal " << " constructor called" << std::endl;
}

Animal::Animal( std::string type ) : _type( type ) {
	std::cout << "Animal " << " constructor called" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal( Animal const & src ) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal&	Animal::operator=( Animal const & rhs ) {
	std::cout << "Animal assignment operator called" << std::endl;
	if ( this != &rhs ) {
		this->_type = rhs.getType();
	}
	return *this;
}

void	Animal::makeSound( void ) const {
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType( void ) const {
	return this->_type;
}
