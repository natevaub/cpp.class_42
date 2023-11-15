/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 04:51:52 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/15 16:51:42 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"IMateriaSource.class.hpp"
#include	"AMateria.class.hpp"
#include	"ICharacter.class.hpp"
#include	"Character.class.hpp"
#include	"MateriaSource.class.hpp"
#include	"Ice.class.hpp"
#include	"Cure.class.hpp"
#include	<iostream>
#include	<string>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	// delete bob;
	// delete me;
	// delete src;
}