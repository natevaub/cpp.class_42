/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:53:12 by nvaubien          #+#    #+#             */
/*   Updated: 2023/10/17 14:47:17 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

Zombie* Zombie::zombieHorde( int N, std::string name) {
	Zombie*	arrZomb = new Zombie[N];
	for (int i = 0; i < N; i++) {
		arrZomb[i].setName(name);
	}
	return arrZomb;
}
