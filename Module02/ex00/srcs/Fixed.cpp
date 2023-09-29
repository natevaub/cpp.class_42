/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:14:05 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/26 00:03:45 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed( void ): _fpoint(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=( const Fixed &overload ) {
	std::cout << "Copy assignement operator called" << std::endl;
	this->_fpoint = overload.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits number function called" << std::endl;
	return this->_fpoint;
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits number function called" << std::endl;
	this->_fpoint = raw;
}