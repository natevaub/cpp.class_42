/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_tests.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:17:07 by nvaubien          #+#    #+#             */
/*   Updated: 2023/10/04 21:13:06 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

int	main( void ) {

	Fixed		a( 4 );
	Fixed		b( 6 );
	Fixed		c( 3.99f );
	Fixed		d( 6.99f );
	

	// std::cout << "TEST : Comparison Operators " << std::endl;
	// std::cout << "Retour "<< a << " < " << b << " --> " << (a < b) << std::endl;
	// std::cout << "Retour "<< a << " > " << b << " --> " << (a > b) << std::endl;
	// std::cout << "Retour "<< a << " <= " << a << " --> " << (a <= b) << std::endl;
	// std::cout << "Retour "<< a << " >= " << b << " --> " << (a >= b) << std::endl;
	// std::cout << "Retour "<< a << " != " << c << " --> " << (a != c) << std::endl;
	// std::cout << "Retour "<< d << " == " << d << " --> " << (d == d) << std::endl;


	// std::cout << "TEST : Aritmetic Operators " << std::endl;
	// std::cout << "Retour "<< a << " + " << b << " --> " << (a + b) << std::endl;
	// std::cout << "Retour "<< a << " - " << a << " --> " << (a - a) << std::endl;
	// std::cout << "Retour "<< a << " * " << d << " --> " << (a * d) << std::endl;
	// std::cout << "Retour "<< d << " / " << c << " --> " << (d / c) << std::endl;

	std::cout << "TEST : Post & Pre Increment Operators" << std::endl;
	std::cout << "Before " << c++ << " After " << c << std::endl;
	std::cout << "Before " << a++ << " After " << a << std::endl;
	Fixed::min(a, b);

	return 0;
}