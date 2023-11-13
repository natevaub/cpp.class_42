/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 03:45:01 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/12 22:52:41 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

#include <iostream>
#include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		~ScavTrap( void );

		ScavTrap( const ScavTrap &scavTrap );
		ScavTrap	&operator=( const ScavTrap &rhs);

		void	attack( std::string const& target );
		void	guardGate( void );
};

#endif