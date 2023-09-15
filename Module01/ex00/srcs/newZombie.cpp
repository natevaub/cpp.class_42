/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:45:41 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/11 13:35:22 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie*	Zombie::newZombie( std::string name ) {
	Zombie*	zomb = new Zombie;
	zomb->setName(name);
	return zomb;
}