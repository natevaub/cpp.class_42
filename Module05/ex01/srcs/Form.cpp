/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:45:59 by nvaubien          #+#    #+#             */
/*   Updated: 2023/12/28 23:10:32 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.class.hpp"
#include "Bureaucrat.class.hpp"

#include <iostream>
#include <string>

Form::Form( std::string name, int tosign, int toexec ) :
	_name( name), _ToSign( tosign ), _ToExec( toexec ) {
		if ( this->_ToSign > 150 )
			throw Form::GradeTooLowException();
		else if ( this->_ToSign < 1 )
			throw Form::GradeTooHighException();
		else if ( this->_ToExec > 150 )
			throw Form::GradeTooLowException();
		else if ( this->_ToSign < 1 )
			throw Form::GradeTooHighException();
		this->_signed = false;
		std::cout << "Form: " << this->_name << " created, grade to sign: "
		<< this->_ToSign << ", grade to execute: " << this->_ToExec << std::endl;
}

Form::~Form() {
	std::cout << "Form: " << this->_name << " destroyed" << std::endl;
}

Form::Form( const Form &form) :
	_name( form._name ), _ToSign( form._ToSign), _ToExec( form._ToExec ) {
		this->_signed = form._signed;
		std::cout << "Form: " << this->_name << " created from copy assignment, grade to sign: "
		<< this->_ToSign << ", grade to execute: " << this->_ToExec << std::endl;
}

Form& Form::operator=( const Form& rhs ) {
	std::cout << "Form: asssignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_signed = rhs._signed;
	}
	std::cout << this->_name << std::endl;
	return *this;
}

std::ostream& operator<<( std::ostream & o, const Form& f) {
		o << "Form: " << f.getName() << ", grade to sign: "
		<< f.toSign () << ", grade to execute: " << f.toExec();
		return o;
}

std::string Form::getName( void ) const {
	return this->_name;
}

void	Form::beSigned( Bureaucrat &b ) {
	if ( b.getGrade() <= this->_ToSign )
	{
		std::cout << "Bureaucrat: " << b.getName() << " signed form: " << this->_name << std::endl;
		this->_signed = true;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
}

bool	Form::isSigned( void ) {
	return this->_signed;
}

int		Form::toSign( void ) const {
	return this->_ToSign;
}

int		Form::toExec( void ) const {
	return this->_ToExec;
}
