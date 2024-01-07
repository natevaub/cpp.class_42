/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:31:26 by nvaubien          #+#    #+#             */
/*   Updated: 2024/01/05 17:25:06 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "AForm.class.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

int main( void ) {
	Bureaucrat Nte( "Nate", 1 );

	try {
		ShrubberyCreationForm s( "target" );
		std::cout << s;
		ShrubberyCreationForm a( s );
		std::cout << a;
		s.beSigned( Nte );
		s.execute( Nte ); }

	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl; }

	try {
		RobotomyRequestForm r( "Popovich" );
		std::cout << r;
		RobotomyRequestForm rr( r );
		std::cout << rr;
		rr.beSigned( Nte );
		rr.execute( Nte ); }

	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl; }

		
	try {
		PresidentialPardonForm p( "Popovich" );
		std::cout << p;
		PresidentialPardonForm pp( p );
		std::cout << pp;
		pp.beSigned( Nte );
		Nte.executeForm( pp ); }
		
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl; }

	return 0;	
}