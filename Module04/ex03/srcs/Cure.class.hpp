/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 04:51:27 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/15 16:39:53 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

#include "AMateria.class.hpp"

class Cure : public AMateria {
	public:
		Cure( void );
		virtual ~Cure( void );
		Cure( Cure const &rhs );
		Cure&	operator=( Cure const &rhs );

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif