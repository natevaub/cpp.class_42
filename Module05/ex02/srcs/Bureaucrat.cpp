/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:31:43 by nvaubien          #+#    #+#             */
/*   Updated: 2024/01/05 17:23:25 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "AForm.class.hpp"
#include <string>
#include <iostream>

Bureaucrat::Bureaucrat( void ): _name( "default" ), _grade( 150 ) {
	std::cout << "Bureaucrat " << Bureaucrat::_name << " graded " << Bureaucrat::_grade << " created!" << std::endl;
	return;
}

Bureaucrat::Bureaucrat( const std::string name, int grade ): _name( name ), _grade( grade ) {
	if (this->_grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	if (this->_grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << "Bureaucrat " << Bureaucrat::_name << " graded " << Bureaucrat::_grade << " created!" << std::endl;
	return;
}

Bureaucrat::Bureaucrat( const Bureaucrat &copy ) : _name( copy._name ), _grade( copy._grade ) {
	std::cout << "Bureaucrat " << Bureaucrat::_name << " graded " << Bureaucrat::_grade << " created!" << std::endl;
	return;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat &rhs ) {
	if ( this != &rhs ) {
		this->_grade = rhs._grade;
	}
	return *this;
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

int	Bureaucrat::getGrade() const {
	return this->_grade;
}

void	Bureaucrat::incrGrade() {
	if (this->_grade >= 2) {
		this->_grade--;
		std::cout << "Bureaucrat " << this->_name << " new grade is " << this->_grade << std::endl;
		return;
	}
	throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrGrade() {
	if (this->_grade <= 149) {
		this->_grade++;
		std::cout << "Bureaucrat " << this->_name << " new grade is " << this->_grade << std::endl;
		return;
	}
	throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm( AForm &form ) {
	try {
		form.beSigned(*this);
	}

	catch ( std::exception &e ) {
		std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;	
	}
}

void	Bureaucrat::executeForm( AForm const &form ) {
	try {
		form.execute( *this );
	}

	catch ( std::exception &e ) {
		std::cout << this->_name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;	
	}
}


Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Bureaucrat " << Bureaucrat::_name << " destroyed!" << std::endl;
}

std::ostream& operator<<( std::ostream& o, const Bureaucrat& rhs ) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}