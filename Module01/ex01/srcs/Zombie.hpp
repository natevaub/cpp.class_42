/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:53:09 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/11 15:57:36 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	public:
		Zombie( void );
		~Zombie( void );

		void			announce( void ) const;
		static Zombie*	zombieHorde( int N, std::string name);
		void			setName( std::string name );
		std::string		getName( void) const;
	private:
		std::string		_name;
};

#endif