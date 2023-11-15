/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 04:52:13 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/15 16:57:08 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.class.hpp"
#include "MateriaSource.class.hpp"
#include <iostream>
#include <string>

MateriaSource::MateriaSource( void ) {
	for (int i = 0; i < 4; i++) {
		this->_materia[i] = NULL;
	}
}

MateriaSource::~MateriaSource( void ) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] != NULL)
		delete this->_materia[i];
		this->_materia[i] = NULL;
	}
}

MateriaSource::MateriaSource( MateriaSource const &rhs ) {
	*this = rhs;
}

MateriaSource&	MateriaSource::operator=( MateriaSource const &rhs ) {
	if (this != &rhs) {
		for (int i = 0; i < 4; i++) {
			this->_materia[i] = rhs._materia[i];
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL) {
			this->_materia[i] = m;
			std::cout << "MateriaSource learned " << m->getType() << " at index " << i << std::endl;
			return;
		}
	}
	std::cout << "MateriaSource can't learn " << m->getType() << std::endl;
}

AMateria*	MateriaSource::createMateria( std::string const& type ) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] && this->_materia[i]->getType() == type) {
			std::cout << "MateriaSource created " << type << " at index " << i << std::endl;
			return this->_materia[i]->clone();
		}
	}
	return 0;
}