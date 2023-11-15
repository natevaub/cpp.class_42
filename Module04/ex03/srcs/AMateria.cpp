/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 04:37:08 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/15 04:46:40 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"
#include <iostream>
#include <string>

AMateria::AMateria( void ) : _type("") {
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::~AMateria( void ) {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria( std::string const & type ) : _type( type ) {
	std::cout << "AMateria " << this->_type << " constructor called" << std::endl;
}

AMateria::AMateria( AMateria const &rhs ) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = rhs;
}

AMateria&	AMateria::operator=( AMateria const &rhs ) {
	std::cout << "AMateria assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

std::string const & AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
	std::cout << "* Does stricly nothing *" << std::endl;
}