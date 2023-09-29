/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:13:14 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/26 00:37:23 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed {
	public:
		Fixed( void );
		Fixed( const Fixed &copy );
		~Fixed( void );

		Fixed& operator=( const Fixed &overload );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		int						_fpoint;
		static const int		_fbits = 8;
};


#endif