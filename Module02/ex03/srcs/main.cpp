/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:17:07 by nvaubien          #+#    #+#             */
/*   Updated: 2023/11/08 05:14:01 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include "Point.class.hpp"
#include <iostream>
#include <cmath>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main( void ) {

    // Test vertices of the triangle
    Point a(0.0, 0.0);
    Point b(4.0, 0.0);
    Point c(2.0, 4.0);

    // Vertex tests
    Point vertexA(0.0, 0.0);
    Point vertexB(4.0, 0.0);
    Point vertexC(2.0, 4.0);

    bool onVertexA = bsp(a, b, c, vertexA);
    bool onVertexB = bsp(a, b, c, vertexB);
    bool onVertexC = bsp(a, b, c, vertexC);

    std::cout << "Is point on vertex A: " << onVertexA << std::endl; // Should print "0" (false)
    std::cout << "Is point on vertex B: " << onVertexB << std::endl; // Should print "0" (false)
    std::cout << "Is point on vertex C: " << onVertexC << std::endl; // Should print "0" (false)

    // Points on the edges of the triangle
    Point onEdgeAB(2.0, 0.0);
    Point onEdgeBC(3.0, 2.0);
    Point onEdgeCA(1.0, 2.0);

    bool onEdgeABResult = bsp(a, b, c, onEdgeAB);
    bool onEdgeBCResult = bsp(a, b, c, onEdgeBC);
    bool onEdgeCAResult = bsp(a, b, c, onEdgeCA);

    std::cout << "Is point on edge AB: " << onEdgeABResult << std::endl; // Should print "0" (false)
    std::cout << "Is point on edge BC: " << onEdgeBCResult << std::endl; // Should print "0" (false)
    std::cout << "Is point on edge CA: " << onEdgeCAResult << std::endl; // Should print "0" (false)

    // Points inside the triangle
    Point insidePoint(2.0, 2.0);
    bool isInside = bsp(a, b, c, insidePoint);
    std::cout << "Is inside point inside the triangle: " << isInside << std::endl; // Should print "1" (true)

    // Points outside the triangle
    Point outsidePoint(5.0, 5.0);
    bool isOutside = bsp(a, b, c, outsidePoint);
    std::cout << "Is outside point inside the triangle: " << isOutside << std::endl; // Should print "0" (false)

    return 0;
}
