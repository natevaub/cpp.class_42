/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:13:14 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/08 04:53:17 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed( void );
		Fixed( const int param_int );
		Fixed( const float param_float );
		Fixed( const Fixed &copy );
		Fixed& operator=( const Fixed &overload );
		~Fixed( void );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float	toFloat( void ) const;
		int		toInt( void ) const;

		/* Comparison Operator */
		bool	operator>( const Fixed &overload ) const;
		bool	operator<( const Fixed &overload ) const;
		bool	operator>=( const Fixed &overload ) const;
		bool	operator<=( const Fixed &overload ) const;
		bool	operator==( const Fixed &overload ) const;
		bool	operator!=( const Fixed &overload ) const;

		/* Aritmetic Operator */
		Fixed	operator+( const Fixed &overload ) const;
		Fixed	operator-( const Fixed &overload ) const;
		Fixed	operator*( const Fixed &overload ) const;
		Fixed	operator/( const Fixed &overload ) const;

		/* Post-Increment / Pre-Increment */
		Fixed&	operator++( void );
		Fixed	operator++( int );
		Fixed&	operator--( void );
		Fixed	operator--( int );

		/* min / max */
		static			Fixed&	min( Fixed &a, Fixed &b );
		static const	Fixed&	min( const Fixed&a, const Fixed &b);
		static			Fixed&	max( Fixed &a, Fixed &b );
		static const	Fixed&	max( const Fixed&a, const Fixed &b);

		static Fixed	abs(Fixed f);

	private:
		int						_fpoint;
		static const int		_fbits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif