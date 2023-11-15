/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:00:22 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/15 01:37:38 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_CLASS_HPP
#define AANIMAL_CLASS_HPP

#include <iostream>
#include "Brain.class.hpp"
#include <string>

class Animal {
	public:
		Animal( void );
		Animal( std::string type );
		/**
		* Deleting a derived class object using a pointer of base class type that has a non-virtual destructor
		*
		* results in undefined behavior. To correct this situation, 
		*
		* the base class should be defined with a virtual destructor. 
		*
		*/
		virtual ~Animal( void );

		Animal( Animal const & src );
		Animal&	operator=( Animal const & rhs );

		virtual void			makeSound( void ) const;
		virtual	std::string		getType( void ) const;
		virtual	Brain*			getBrain( void ) const = 0;

	protected:
		std::string	_type;
};

#endif