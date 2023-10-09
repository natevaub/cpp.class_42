/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:55:56 by nvaubien          #+#    #+#             */
/*   Updated: 2023/10/07 18:14:17 by nvaubien         ###   ########.fr       */
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

bool bsp( Point const a, Point const b, Point const c, Point const point);

/*	Utility function to calculate area of a triangle formed by
	( x1, y1 ), ( x2, y2 ), ( x3, y3 ) */


#endif