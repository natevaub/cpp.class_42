/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:02:19 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/13 23:12:58 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.class.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal {
	public:
		WrongCat( void );
		virtual ~WrongCat( void );

		void	makeSound( void ) const;
};

#endif