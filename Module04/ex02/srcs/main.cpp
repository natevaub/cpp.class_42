/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:40:14 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/15 02:16:19 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.class.hpp"
#include "Cat.class.hpp"
#include "Brain.class.hpp"
#include "Dog.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"
#include <iostream>
#include <string>

int main( void ) {
	std::cout << "---- 42 TESTS ----" << std::endl;
	Animal *animals[10];

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < 10; i++)
		delete animals[i];

	Dog *d = new Dog;
	d->makeSound();
	Dog *a = new Dog;
	*a = *d;
	std::cout << d->getBrain()->getIdea(0) << std::endl;
	std::cout << a->getBrain()->getIdea(0) << std::endl;

	delete d;
	delete a;


	return 0;
}
