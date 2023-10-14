/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 03:43:09 by nvaubien          #+#    #+#             */
/*   Updated: 2023/10/14 03:43:13 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>

class ClapTrap {
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		~ClapTrap( void );

		ClapTrap( const ClapTrap &clapTrap );
		ClapTrap	&operator=( const ClapTrap &rhs);

		void	attack( const std::string& target);
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

	private:
		std::string		_Name;
		unsigned int	_HitPoints;
		unsigned int	_EnergyPoints;
		unsigned int	_AttackDamage;
};

#endif