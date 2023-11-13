
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
#include "DiamondTrap.class.hpp"
#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"

int	main( void ) {
	DiamondTrap dt1("dt1");
	dt1.highFivesGuys();
	dt1.guardGate();
	dt1.whoAmI();
}