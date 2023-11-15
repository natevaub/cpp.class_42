/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 04:33:18 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/15 16:40:07 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

#include "AMateria.class.hpp"

class Ice : public AMateria {
	public:
		Ice( void );
		virtual ~Ice( void );
		Ice( Ice const &rhs );
		Ice&	operator=( Ice const &rhs );

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif