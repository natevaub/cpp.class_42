/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:40:26 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/11 19:43:36 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP

#include "Animal.class.hpp"
#include <iostream>
#include <string>

class Dog : public Animal {
	public:
	Dog( void );
	~Dog( void );

	Dog( Dog const & rhs );
	Dog&	operator=( Dog const &rhs );

	void	makeSound( void ) const;
};

#endif