/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:24:10 by nvaubien          #+#    #+#             */
/*   Updated: 2023/10/17 14:47:50 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	public:
		Zombie( void );
		~Zombie( void );

		void				announce( void ) const;
		static Zombie		*newZombie( std::string name );
		static void			randomChump ( std::string name );
		void				setName( std::string name );
		std::string			getName(void) const;

	private:
		std::string	_name;
};


#endif