/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:31:26 by nvaubien          #+#    #+#             */
/*   Updated: 2023/12/27 16:25:01 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include <string>
#include <iostream>

int main( void ) {
	Bureaucrat s;

	try {
		std::cout << "Attempting to create bureaucrat Myke!" << std::endl;
		Bureaucrat("Myke", 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "Attempting to create bureaucrat Freddy!" << std::endl;
		Bureaucrat("Freddy", 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "Attempting to create bureaucrat Nate!" << std::endl;
		Bureaucrat Nate("Nate", 148);
		try {
			Nate.decrGrade();
			Nate.decrGrade();
			Nate.decrGrade();
		}

		catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
		
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;	
}