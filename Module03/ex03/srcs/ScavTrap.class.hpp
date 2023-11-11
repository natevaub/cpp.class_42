/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 03:45:01 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/11 16:08:34 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

#include <iostream>
#include "ClapTrap.class.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		~ScavTrap( void );

		ScavTrap( const ScavTrap &scavTrap );
		ScavTrap	&operator=( const ScavTrap &rhs);

		void	attack( const std::string& target);
		void	guardGate( void );
};

#endif