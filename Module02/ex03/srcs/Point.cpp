/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:59:44 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/08 04:46:35 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.class.hpp"

Point::Point( void ): _x(0), _y(0) {
	// std::cout << "Point created" << std::endl;
}

Point::Point( const float a, const float b): _x(a), _y(b) {
	// std::cout << "Point created" << std::endl;
}

Point::~Point( void ) {
	// std::cout << "Point destroyed" << std::endl;
}

Point::Point( const Point &og ): _x(og._x), _y(og._y) {
	// std::cout << "Point created" << std::endl;
}

Point&	Point::operator=( const Point &rhs ) {
	if ( this != &rhs) {
		(Fixed)this->_x = rhs._x;
		(Fixed)this->_y = rhs._y;
	}
	return *this;
}

Fixed	Point::get_x( void ) const {
	return this->_x.toFloat();
}

Fixed	Point::get_y( void ) const {
	return this->_y.toFloat();
}