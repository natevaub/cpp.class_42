/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:25:37 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/12 12:55:01 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_CLAS_HPP
# define HUMANB_CLASS_HPP

#include <iostream>
#include "Weapon.class.hpp"

class HumanB {
	public:
		HumanB( std::string name );
		~HumanB( void );

		void	attack( void ) const;
		void	setWeapon( Weapon &weapon);
	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif