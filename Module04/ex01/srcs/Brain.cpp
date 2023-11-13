/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 02:57:12 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/12 03:47:38 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"

Brain::Brain( void ) {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain( Brain const &src ) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain&	Brain::operator=( Brain const &rhs ) {
	std::cout << "Brain assignment operator called" << std::endl;
	if ( this != &rhs ) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs.getIdea(i);
	}
	return *this;
}

std::string	Brain::getIdea( int i ) const {
	if (i < 0 || i > 99)
		return ("Invalid index");
	if (this->_ideas[i].empty())
		return std::string("No idea...");
	return this->_ideas[i];
}

void	Brain::setIdea( int i, std::string idea ) {
	if (i < 0 || i > 99)
		std::cout << "Invalid index" << std::endl;
	else
		this->_ideas[i] = idea;
}