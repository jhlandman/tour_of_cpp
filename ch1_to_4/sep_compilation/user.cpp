/*********************************************************************
** Author: Jayson Landman
** Description: Using the Vector class
*********************************************************************/

#include "Vector.h"
#include <cmath> // sqrt is in here
#include <iostream>

double sqrt_sum(Vector& v) {
	double sum = 0;
	for (int i = 0; i < v.size(); ++i) 
		sum += std::sqrt(v[i]);
	return sum;
}

int main() {
	Vector v(3);
	
	// filling in the values
	std::cin >> v[0];
	std::cin >> v[1];
	std::cin >> v[2];
	
	// v[5] = 9;
	
	std::cout << "The sum of squares is: " << sqrt_sum(v);
	
	return 0;
}