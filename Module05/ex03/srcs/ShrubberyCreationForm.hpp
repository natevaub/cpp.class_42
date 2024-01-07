/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:07:33 by nvaubien          #+#    #+#             */
/*   Updated: 2023/12/29 16:59:32 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CLASS_HPP
# define SHRUBERRY_CLASS_HPP

#include "AForm.class.hpp"
#include "Bureaucrat.class.hpp"
#include <string>
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm &ShrubberyCreationForm );
		virtual ~ShrubberyCreationForm( void );

		ShrubberyCreationForm& operator=( const ShrubberyCreationForm &rhs );

		std::string	getTarget() const;

		virtual void	execute( Bureaucrat &executor ) const;

	private:
		const std::string	_target;
};

std::ostream	&operator<<( std::ostream &o, ShrubberyCreationForm &rhs );

#endif