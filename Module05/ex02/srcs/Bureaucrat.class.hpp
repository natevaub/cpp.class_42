/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:31:55 by nvaubien          #+#    #+#             */
/*   Updated: 2024/01/05 17:21:59 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

#include <string>

class AForm;

class Bureaucrat {
	public:
		Bureaucrat( void );
		Bureaucrat( const std::string name, int grade );
		Bureaucrat( const Bureaucrat &copy );
		~Bureaucrat( void );

		Bureaucrat& operator=( const Bureaucrat &rhs );

		std::string	getName() const;
		int			getGrade() const;
		void		incrGrade();	// incrGrade should decrease the value of _grade
		void		decrGrade();	// decrGrade should raise the value of _grade
		void		signForm( AForm &form );
		void		executeForm( AForm const &form );


		/* ----- Exception Classes ----- */
		class GradeTooHighException : public std::exception {
			public:
				virtual const char * what() const throw() { return "Grade to High"; }
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char * what() const throw() { return "Grade to Low"; }
		};

			
	private:
		const std::string	_name;
		int					_grade;
};

std::ostream&	operator<<( std::ostream& o, const Bureaucrat& rhs );

#endif