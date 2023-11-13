/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:02:08 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/12 04:11:59 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP

#include "Animal.class.hpp"
#include "Brain.class.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {
	public:
	Cat( void );
	~Cat( void );

	Cat( Cat const & rhs );
	Cat&	operator=( Cat const &rhs );

	void	makeSound( void ) const;
	Brain	*getBrain( void ) const;

	protected:
		Brain	*_brain;
};

#endif