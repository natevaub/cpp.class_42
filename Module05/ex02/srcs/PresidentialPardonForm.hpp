/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:29:07 by nvaubien          #+#    #+#             */
/*   Updated: 2024/01/05 16:31:03 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDON_CLASS_HPP
# define PRESIDENTIALPARDON_CLASS_HPP

#include "AForm.class.hpp"
#include "Bureaucrat.class.hpp"
#include <string>
#include <iostream>
#include <fstream>

class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm &PresidentialPardonForm );
		virtual ~PresidentialPardonForm( void );

		PresidentialPardonForm& operator=( const PresidentialPardonForm &rhs );

		std::string	getTarget() const;

		virtual void	execute( Bureaucrat &executor ) const;

	private:
		const std::string	_target;
};

std::ostream	&operator<<( std::ostream &o, PresidentialPardonForm &rhs );

#endif