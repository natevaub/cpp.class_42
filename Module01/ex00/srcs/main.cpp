/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:06:02 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/11 13:34:12 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie* one = Zombie::newZombie("Christian d'la Yaute");
	one->announce();
	Zombie::randomChump("Carlos le pianiste");

	delete one;
	return 0;
}