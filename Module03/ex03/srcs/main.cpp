
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
#include "FragTrap.class.hpp"

int	main( void ) {
	ClapTrap Hugo("Hughh");

	ScavTrap sv1("Kamaru Usman");
	ScavTrap sv2(sv1);
	ScavTrap sv3("Khamzat Chimaev");
	sv3.guardGate();
	sv3.attack("Kamaru Usman");
	FragTrap ft1("Conor McGregor");
}