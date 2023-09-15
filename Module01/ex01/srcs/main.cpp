/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:52:39 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/11 16:16:49 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	Zombie* zombie = Zombie::zombieHorde(5, "Schummi");
	for (int i = 0; i < 5; i++) {
		zombie[i].announce();
	}

	delete[] zombie;
	return 0;
}