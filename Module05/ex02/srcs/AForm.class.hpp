#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

#include "Bureaucrat.class.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class AForm {
	public:
		AForm( std::string name, int tosign, int toexec );
		AForm( const AForm &form );
		virtual ~AForm( void );

		AForm& operator=( const AForm &rhs );

		virtual void	execute( Bureaucrat &executor ) const = 0;

		void		beSigned( Bureaucrat &b );

		std::string getName( void ) const ;
		bool		isSigned( void ) const ;
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
		class NotSignedException : public std::exception {
			public:
				virtual const char * what() const throw() { return "Form: Not Signed"; }
		};
			



	private:
		const std::string	_name;
		bool				_signed;
		const int			_ToSign;
		const int			_ToExec;


};

std::ostream&	operator<<( std::ostream& o, const AForm& f);

#endif