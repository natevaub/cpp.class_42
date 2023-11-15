/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 04:51:58 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/15 16:49:28 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.class.hpp"
#include "AMateria.class.hpp"
#include <iostream>
#include <string>

Cure::Cure( void ) : AMateria( "Cure" ) {
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::~Cure( void ) {
	std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure( Cure const &rhs ) : AMateria( "cure" ) {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = rhs;
}

Cure&	Cure::operator=( Cure const &rhs ) {
	std::cout << "Cure assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

AMateria* Cure::clone() const {
	return new Cure();
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}