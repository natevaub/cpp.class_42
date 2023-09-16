/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:36:27 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/16 03:13:33 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_HPP
# define HARL_CLASS_HPP

#include <iostream>

class Harl {
	public:
		Harl( void );
		~Harl( void );
		
		void	complain( std::string complain );

	private:
		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );
};

#endif