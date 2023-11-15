/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:02:14 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/12 04:02:17 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
	public:
		WrongAnimal( void );
		WrongAnimal( std::string type);
		virtual ~WrongAnimal( void );

		WrongAnimal( WrongAnimal const &src );
		WrongAnimal&	operator=( WrongAnimal const &rhs );

		void			makeSound( void ) const;
		std::string		getType( void ) const;

	protected:
		std::string	_type;
};

#endif