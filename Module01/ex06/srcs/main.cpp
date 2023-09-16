/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:36:32 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/16 03:23:34 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

int	main( int ac, char **av ) {
	Harl harl;

	if (ac == 1)
	{
		std::cout << "Whats your message to the world?" << std::endl;
		return 0;
	}
	harl.complain(av[1]);
	return 0;
}