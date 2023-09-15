/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:09:47 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/12 13:10:51 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

#include <iostream>

class Weapon {
	public:
		Weapon( void );
		Weapon( std::string type);
		~Weapon( void );

		std::string 			getType( void ) const;
		void					setType(std::string type);

	private:
		std::string	_type;
};

#endif