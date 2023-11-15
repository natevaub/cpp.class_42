/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 03:53:52 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/15 16:43:15 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

#include <string>
#include "ICharacter.class.hpp"

class ICharacter;

class AMateria {
	public:
		AMateria( void );
		virtual ~AMateria( void );
		AMateria( std::string const & type );
		AMateria( AMateria const &rhs );
		AMateria&	operator=( AMateria const &rhs );

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string _type;

};

#endif