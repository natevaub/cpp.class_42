/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:02:27 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/12 04:02:29 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

#include <iostream>

class Brain {
	public:
		Brain( void );
		~Brain( void );

		Brain ( Brain const &src );
		Brain&	operator=( Brain const &rhs );
	
		std::string		getIdea( int i ) const;
		void			setIdea( int i, std::string idea );

	private:
		std::string _ideas[100];
};

#endif