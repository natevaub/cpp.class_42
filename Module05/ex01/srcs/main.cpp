/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:31:26 by nvaubien          #+#    #+#             */
/*   Updated: 2023/12/29 01:34:23 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include <string>
#include <iostream>

int main( void ) {
	Bureaucrat s( "Nate", 1 );

	try {
		Form b( "Loi Federal", 1, 5);
		Form a(b);
		Form c("Loi cantonal", 50, 7);
		std::cout << c << std::endl;
		try {
			c.beSigned( s );
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl;
		}
		try {
			s.signForm( b );
		}
		catch ( std::exception & e ) {

		}
	}

	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}

	return 0;	
}