/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 03:43:22 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/12 22:18:13 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

int	main( void ) {
	ClapTrap Hugo("Hughh");
	
	Hugo.attack("Darius");
	Hugo.beRepaired(50);
	Hugo.takeDamage(10);

	return 0;
}