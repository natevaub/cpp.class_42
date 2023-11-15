/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 04:52:03 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/15 16:49:22 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.class.hpp"
#include "AMateria.class.hpp"
#include <iostream>
#include <string>

Ice::Ice( void ) : AMateria( "ice" ) {
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::~Ice( void ) {
	std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice( Ice const &rhs ) : AMateria( "ice" ) {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = rhs;
}

Ice&	Ice::operator=( Ice const &rhs ) {
	std::cout << "Ice assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

AMateria* Ice::clone() const {
	return new Ice();
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}