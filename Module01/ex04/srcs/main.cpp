/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:59:12 by nvaubien          #+#    #+#             */
/*   Updated: 2023/10/17 14:17:10 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "Not enough arguments" << std::endl;
		std::cout << "Usage: ./sed2.0 <filename> <string0> <string1>" << std::endl;
		return (1);
	}
	/* GET ARGUMENTS */
	std::string	to_open = av[1];
	std::string	aimStr = av[2];
	std::string	replaceStr = av[3];
	std::string	outName = to_open + ".replace";


	std::ifstream	infile(to_open, std::ios::in);

	if (!infile.is_open()) {
		std::cerr << "Error: Cannot open infile ❌" << std::endl;
		return (1);
	}

	std::ofstream	outfile(outName, std::ios::out);

	if (!outfile.is_open()) {
		std::cout << "Error : Cannot open outfile ❌" << std::endl;
		return (1);
	}

	std::string	line;
	while (std::getline(infile, line)) {
		std::string	replacedLine;
		size_t		pos = 0;

		size_t		newPos = line.find(aimStr, pos);
		while (newPos != std::string::npos) {
			replacedLine.append(line.substr(pos, newPos - pos));

			replacedLine.append(replaceStr);

			pos = newPos + aimStr.length();
			newPos = line.find(aimStr, pos);
		}
		replacedLine.append(line.substr(pos));
		outfile << replacedLine << std::endl;
	}
	infile.close();
	outfile.close();

	return 0;
}