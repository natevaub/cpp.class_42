/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:10:02 by nvaubien          #+#    #+#             */
/*   Updated: 2024/01/05 17:26:09 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#include <string>
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) :
	AForm("shrubbery creation", 145, 137 ), _target( target ) {
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	std::cout << this->getName() << " destroyed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &ShrubberyCreationForm) :
	AForm( ShrubberyCreationForm ), _target( ShrubberyCreationForm._target ) {
		std::cout << "Copy assignment called!" << std::endl;
}

std::ostream &operator<<( std::ostream &o, ShrubberyCreationForm &rhs ) {
		std::cout << "--------------------------------------------------------" << std::endl;
		std::cout << "Form: " << rhs.getName() << std::endl;
		std::cout << "Target: " << rhs.getTarget () << std::endl;
		std::cout << "Grade to sign: " << rhs.toSign() << std::endl;
		std::cout << "Grade to execute: " << rhs.toExec() << std::endl;
		std::cout << "--------------------------------------------------------" << std::endl;
		return o;
}


std::string	ShrubberyCreationForm::getTarget() const {
	return this->_target;
}

void	ShrubberyCreationForm::execute( Bureaucrat &executor ) const {
	if ( this->isSigned() == false )
		throw AForm::NotSignedException();
	else if ( executor.getGrade() > this->toExec() )
	{
		throw AForm::GradeTooLowException();
	}
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
	std::ofstream file( (this->getTarget() + "_shrubbery").c_str() );
    file << "                      ___" << std::endl;
    file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
    file << "             ,-'          __,,-- \\" << std::endl;
    file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
    file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
    file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
    file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
    file << "     (     ,-'                  `." << std::endl;
    file << "      `._,'     _   _             ;" << std::endl;
    file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
    file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
    file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
    file << "                \"Hb HH dF" << std::endl;
    file << "                 \"HbHHdF" << std::endl;
    file << "                  |HHHF" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  dHHHb" << std::endl;
    file << "                .dFd|bHb.               o" << std::endl;
    file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
    file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
    file << "##########################################" << std::endl;
    file.close();
}