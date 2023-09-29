/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:14:05 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/28 21:58:57 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void ): _fpoint(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void ) {
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const int param_int ): _fpoint(param_int << _fbits) {
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float param_float ): _fpoint(std::roundf(param_float * (1 << _fbits))) {
	// std::cout << "Float constructor called" << std::endl;
}

float	Fixed::toFloat( void ) const {
	return static_cast<float>(this->getRawBits()) / (1 << _fbits);
}

int	Fixed::toInt( void ) const {
	return (this->getRawBits() >> _fbits);
}

std::ostream & operator<<(std::ostream & myObj, Fixed const & rhs){
	myObj << rhs.toFloat();
	return myObj;
}

Fixed::Fixed( const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed&	Fixed::operator=( const Fixed &overload ) {
	std::cout << "Copy assignement operator called" << std::endl;
	this->_fpoint = overload.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const {
	return this->_fpoint;
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits number function called" << std::endl;
	this->_fpoint = raw;
}

/* Comparison Operator */
bool	Fixed::operator>( const Fixed &overload ) const {
	return this->getRawBits() > overload.getRawBits();
}

bool	Fixed::operator<( const Fixed &overload ) const {
	return this->getRawBits() < overload.getRawBits();
}

bool	Fixed::operator>=( const Fixed &overload ) const {
	return this->getRawBits() >= overload.getRawBits();
}

bool	Fixed::operator<=( const Fixed &overload ) const {
	return this->getRawBits() <= overload.getRawBits();
}

bool	Fixed::operator==( const Fixed &overload ) const {
	return this->getRawBits() == overload.getRawBits();
}

bool	Fixed::operator!=( const Fixed &overload ) const {
	return this->getRawBits() != overload.getRawBits();
}

/* Aritmetic Operator */
Fixed	Fixed::operator+( const Fixed &overload ) const {
	return this->toFloat() + overload.toFloat();
}

Fixed	Fixed::operator-( const Fixed &overload ) const {
	return this->toFloat() - overload.toFloat();
}

Fixed	Fixed::operator*( const Fixed &overload ) const {
	return this->toFloat() * overload.toFloat();
}

Fixed	Fixed::operator/( const Fixed &overload ) const {
	return this->toFloat() / overload.toFloat();
}

/* Post-Increment / Pre-Increment */

/* min / max */