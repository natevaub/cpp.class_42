/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:45:59 by nvaubien          #+#    #+#             */
/*   Updated: 2023/12/29 14:58:48 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.class.hpp"
#include "Bureaucrat.class.hpp"

#include <iostream>
#include <string>

AForm::AForm( std::string name, int tosign, int toexec ) :
	_name( name), _ToSign( tosign ), _ToExec( toexec ) {
		if ( this->_ToSign > 150 )
			throw AForm::GradeTooLowException();
		else if ( this->_ToSign < 1 )
			throw AForm::GradeTooHighException();
		else if ( this->_ToExec > 150 )
			throw AForm::GradeTooLowException();
		else if ( this->_ToSign < 1 )
			throw AForm::GradeTooHighException();
		this->_signed = false;
		// std::cout << "AForm: " << this->_name << " created, grade to sign: "
		// << this->_ToSign << ", grade to execute: " << this->_ToExec << std::endl;
}

AForm::~AForm() {
	// std::cout << "AForm: " << this->_name << " destroyed" << std::endl;
}

AForm::AForm( const AForm &AForm) :
	_name( AForm._name ), _ToSign( AForm._ToSign), _ToExec( AForm._ToExec ) {
		this->_signed = AForm._signed;
		// std::cout << "AForm: " << this->_name << " created from copy assignment, grade to sign: "
		// << this->_ToSign << ", grade to execute: " << this->_ToExec << std::endl;
}

AForm& AForm::operator=( const AForm& rhs ) {
	std::cout << "AForm: asssignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_signed = rhs._signed;
	}
	std::cout << this->_name << std::endl;
	return *this;
}

std::ostream& operator<<( std::ostream & o, const AForm& f) {
		o << "AForm: " << f.getName() << ", grade to sign: "
		<< f.toSign () << ", grade to execute: " << f.toExec();
		return o;
}

std::string AForm::getName( void ) const {
	return this->_name;
}

void	AForm::beSigned( Bureaucrat &b ) {
	if ( b.getGrade() <= this->_ToSign )
	{
		std::cout << b.getName() << " signed form: " << this->_name << std::endl;
		this->_signed = true;
	}
	else
	{
		throw AForm::GradeTooLowException();
	}
}

bool	AForm::isSigned( void ) const {
	return this->_signed;
}

int		AForm::toSign( void ) const {
	return this->_ToSign;
}

int		AForm::toExec( void ) const {
	return this->_ToExec;
}
