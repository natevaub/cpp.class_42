
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 03:43:22 by nvaubien          #+#    #+#             */
/*   Updated: 2023/10/14 03:43:25 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"

int	main( void ) {
	ScavTrap Hugo("Hughh");
	
	Hugo.attack("Darius");
	Hugo.beRepaired(50);
	Hugo.takeDamage(10);
	Hugo.guardGate();

	return 0;
}