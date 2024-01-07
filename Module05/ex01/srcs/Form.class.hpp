#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

#include "Bureaucrat.class.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class Form {
	public:
		Form( std::string name, int tosign, int toexec );
		Form( const Form &form );
		~Form( void );

		Form& operator=( const Form &rhs );

		void		beSigned( Bureaucrat &b );

		std::string getName( void ) const ;
		bool		isSigned( void ) ;
		int			toSign( void) const ;
		int			toExec( void ) const ;


		class GradeTooHighException : public std::exception {
			public:
				virtual const char * what() const throw() {return "Form: Grade to High"; }
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char * what() const throw() { return "Form: Grade to Low"; }
		};


	private:
		const std::string	_name;
		bool				_signed;
		const int			_ToSign;
		const int			_ToExec;


};

std::ostream&	operator<<( std::ostream& o, const Form& f);

#endif