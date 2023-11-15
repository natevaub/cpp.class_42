/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 05:22:56 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/15 16:44:12 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

#include "ICharacter.class.hpp"
#include "AMateria.class.hpp"

class Character : public ICharacter {
	public:
		Character( std::string name );
		virtual ~Character( void );
		Character( Character const &rhs );
		Character&	operator=( Character const &rhs );

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private:
		std::string	_name;
		AMateria*	_inventory[4];
		int			_nbMateria;
};
#endif

