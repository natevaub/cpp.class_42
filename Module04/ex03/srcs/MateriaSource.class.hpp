/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:08:28 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/15 16:21:29 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP

#include "IMateriaSource.class.hpp"
#include "AMateria.class.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource( void );
		virtual ~MateriaSource( void );
		MateriaSource( MateriaSource const &rhs );
		MateriaSource&	operator=( MateriaSource const &rhs );

		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const & type);

	private:
		AMateria*		_materia[4];
};



#endif