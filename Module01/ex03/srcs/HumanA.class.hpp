/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:25:26 by nvaubien          #+#    #+#             */
/*   Updated: 2023/10/17 14:21:15 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

#include <iostream>
#include "Weapon.class.hpp"

class HumanA {
	public:
		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );

		void	attack( void ) const;
	private:
		std::string _name;
		Weapon		&_weapon;
};

#endif