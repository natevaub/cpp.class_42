
#ifndef ROBOTOMYREQUEST_FORM_HPP
# define ROBOTOMYREQUEST_FORM_HPP

#include "AForm.class.hpp"
#include "Bureaucrat.class.hpp"
#include <string>
#include <iostream>
#include <fstream>

class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm &RobotomyRequestForm );
		virtual ~RobotomyRequestForm( void );

		RobotomyRequestForm& operator=( const RobotomyRequestForm &rhs );

		std::string	getTarget() const;

		virtual void	execute( Bureaucrat &executor ) const;

	private:
		const std::string	_target;
};

std::ostream	&operator<<( std::ostream &o, RobotomyRequestForm &rhs );

#endif