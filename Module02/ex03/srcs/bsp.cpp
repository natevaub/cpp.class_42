/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 04:36:42 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/08 05:11:22 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.class.hpp"

static Fixed	area(Point const a, Point const b, Point const c);

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	a_total, a1, a2, a3;

	a_total = area(a, b, c);
	a1 = area(a, b, point);
	a2 = area(a, point, c);
	a3 = area(point, b, c);

	return (a1 != Fixed(0) && a2 != Fixed(0) && a3 != Fixed(0)
			&& a1 + a2 + a3 == a_total);
}

static Fixed	area(Point const a, Point const b, Point const c)
{
	return Fixed(0.5f) * Fixed::abs((a.get_x() - c.get_x()) * (b.get_y() - a.get_y())
		   - (a.get_x() - b.get_x()) * (c.get_y() - a.get_y()));
}