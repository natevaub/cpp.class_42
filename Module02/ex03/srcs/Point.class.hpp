/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:55:56 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/08 05:11:45 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_CLASS_HPP
# define POINT_CLASS_HPP

#include "Fixed.class.hpp"

class Point {
	public:
		Point( void );
		~Point( void );
		Point( const float x, const float y );
		Point( const Point &og );
		Point& operator=( const Point &rhs );

		Fixed	get_x( void ) const;
		Fixed	get_y( void ) const;

	private:
		const Fixed	_x;
		const Fixed	_y;
};

#endif