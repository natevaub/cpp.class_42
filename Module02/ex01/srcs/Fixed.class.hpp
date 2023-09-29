/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:13:14 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/27 14:12:11 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed {
	public:
		Fixed( void );
		Fixed( const int param_int );
		Fixed( const float param_float );
		Fixed( const Fixed &copy );
		~Fixed( void );

		Fixed& operator=( const Fixed &overload );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:
		int						_fpoint;
		static const int		_fbits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);



#endif