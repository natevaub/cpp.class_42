/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:00:50 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/15 01:13:05 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal") {
	std::cout << this->_type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type) {
	std::cout << "WrongAnimal " << this->_type << " constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal " << this->_type << " desctructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &src ) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal&	WrongAnimal::operator=( WrongAnimal const &rhs ) {
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if ( this != &rhs ) {
		this->_type = rhs.getType();
	}
	return *this;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string	WrongAnimal::getType( void ) const {
	return this->_type;
}