/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:29:29 by nvaubien          #+#    #+#             */
/*   Updated: 2024/01/05 17:25:53 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

PresidentialPardonForm::PresidentialPardonForm( std::string target ) :
	AForm("presidential pardon", 25, 5 ), _target( target ) {
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	std::cout << this->getName() << " destroyed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &PresidentialPardonForm) :
	AForm( PresidentialPardonForm ), _target( PresidentialPardonForm._target ) {
		std::cout << "Copy assignment called!" << std::endl;
}

std::ostream &operator<<( std::ostream &o, PresidentialPardonForm &rhs ) {
		std::cout << "--------------------------------------------------------" << std::endl;
		std::cout << "Form: " << rhs.getName() << std::endl;
		std::cout << "Target: " << rhs.getTarget () << std::endl;
		std::cout << "Grade to sign: " << rhs.toSign() << std::endl;
		std::cout << "Grade to execute: " << rhs.toExec() << std::endl;
		std::cout << "--------------------------------------------------------" << std::endl;
		return o;
}


std::string	PresidentialPardonForm::getTarget() const {
	return this->_target;
}

void	PresidentialPardonForm::execute( Bureaucrat &executor ) const {
	if ( this->isSigned() == false )
		throw AForm::NotSignedException();
	else if ( executor.getGrade() > this->toExec() )
	{
		throw AForm::GradeTooLowException();
	}
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblrox" << std::endl;
	std::cout << "--------------------------------------------------------" << std::endl;
}