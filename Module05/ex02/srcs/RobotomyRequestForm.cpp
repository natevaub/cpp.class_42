/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:28:32 by nvaubien          #+#    #+#             */
/*   Updated: 2024/01/05 17:26:02 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm( std::string target ) :
	AForm("robotomy request", 72, 45 ), _target( target ) {
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	std::cout << this->getName() << " destroyed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &RobotomyRequestForm) :
	AForm( RobotomyRequestForm ), _target( RobotomyRequestForm._target ) {
		std::cout << "Copy assignment called!" << std::endl;
}

std::ostream &operator<<( std::ostream &o, RobotomyRequestForm &rhs ) {
		std::cout << "--------------------------------------------------------" << std::endl;
		std::cout << "Form: " << rhs.getName() << std::endl;
		std::cout << "Target: " << rhs.getTarget () << std::endl;
		std::cout << "Grade to sign: " << rhs.toSign() << std::endl;
		std::cout << "Grade to execute: " << rhs.toExec() << std::endl;
		std::cout << "--------------------------------------------------------" << std::endl;
		return o;
}


std::string	RobotomyRequestForm::getTarget() const {
	return this->_target;
}

void	RobotomyRequestForm::execute( Bureaucrat &executor ) const {
	if ( this->isSigned() == false )
		throw AForm::NotSignedException();
	else if ( executor.getGrade() > this->toExec() )
	{
		throw AForm::GradeTooLowException();
	}
	srand(time(0));
	int ran;
	for (int i = 0; i < 5; i++)
	{
		ran = rand();
	}
	std::cout << "--------------------------------------------------------" << std::endl;
	if ( ran % 2 == 0)
		std::cout << this->getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << "Robotomization failed" << std::endl;
	std::cout << "--------------------------------------------------------" << std::endl;
}