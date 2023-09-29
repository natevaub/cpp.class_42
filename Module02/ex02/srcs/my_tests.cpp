/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_tests.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:17:07 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/28 21:54:35 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

int	main( void ) {

	Fixed const		a( 4 );
	Fixed const		b( 6 );
	Fixed const		c( 3.99f );
	Fixed const		d( 6.99f );
	

	std::cout << "TEST : Comparison Operators " << std::endl;
	std::cout << "Retour "<< a << " < " << b << " --> " << (a < b) << std::endl;
	std::cout << "Retour "<< a << " > " << b << " --> " << (a > b) << std::endl;
	std::cout << "Retour "<< a << " <= " << a << " --> " << (a <= b) << std::endl;
	std::cout << "Retour "<< a << " >= " << b << " --> " << (a >= b) << std::endl;
	std::cout << "Retour "<< a << " != " << c << " --> " << (a != c) << std::endl;
	std::cout << "Retour "<< d << " == " << d << " --> " << (d == d) << std::endl;


	std::cout << "TEST : Aritmetic Operators " << std::endl;
	std::cout << "Retour "<< a << " + " << b << " --> " << (a + b) << std::endl;
	std::cout << "Retour "<< a << " - " << a << " --> " << (a - a) << std::endl;
	std::cout << "Retour "<< a << " * " << d << " --> " << (a * d) << std::endl;
	std::cout << "Retour "<< d << " / " << c << " --> " << (d / c) << std::endl;

	return 0;
}