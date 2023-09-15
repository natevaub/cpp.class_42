/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:53:12 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/11 16:15:15 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

Zombie* Zombie::zombieHorde( int N, std::string name) {
	Zombie*	arrZomb = new Zombie[5];
	for (int i = 0; i < N; i++) {
		arrZomb[i].setName(name);
	}
	return arrZomb;
}
