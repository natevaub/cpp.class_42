/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:44:33 by nvaubien          #+#    #+#             */
/*   Updated: 2024/01/06 14:48:01 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.class.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.class.hpp"
#include "AForm.class.hpp"

#include <string>
#include <iostream>

typedef struct list {
	std::string	name;
	AForm		*form;
} t_list;

Intern::Intern( void ) { }

Intern::~Intern( void ) { }

AForm *Intern::makeForm( std::string form, std::string target ) {
	AForm *ret = NULL;

	t_list list[3] = {
		{ "shrubbery creation", new ShrubberyCreationForm( target )},
		{ "robotomy reqiest ", new RobotomyRequestForm( target )},
		{ "presidential pardon", new PresidentialPardonForm(target)},
	};

	for (int i = 0; i < 3; i++) {
		if ( form == list[i].name ) {
			ret = list[i].form;
		}
		else {
			delete list[i].form;
		}
	}
	if (!ret) {
		std::cout << "Intern cannot create " << form << std::endl;
		return NULL;
	}
	std::cout << "Intern creates " << form << std::endl;
	return ret;
}