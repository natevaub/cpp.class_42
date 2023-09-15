/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:20:55 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/11 16:59:35 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ) {
	std::string str = "HI THIS BRAIN";

	std::string	*stringPTR = &str;

	std::string	&stringREF = str;

	std::cout << "Memory adress of str : " << &str << std::endl;
	std::cout << "Memory adress held by stringPTR : " << stringPTR << std::endl;
	std::cout << "Memory adress held by stringREF : " << &stringREF << std::endl;

	std::cout << "Value of string variable : " << str << std::endl;
	std::cout << "Value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF : " << stringREF << std::endl;

	return 0;
}