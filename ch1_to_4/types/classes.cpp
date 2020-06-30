/**********************************************************
** Author: Jayson Landman
** Description: this example illustrates a Vector class
**********************************************************/

#include <iostream>

// full class
class Vector {
public:
	// constructor - has the same name as the class 
	Vector(int s) :elem{new double[s]}, sz{s}{}
	// element access: subscripting
	double& operator[](int i) {return elem[i];} 
	int size() {return sz;}
private:
	double* elem; // pointer to the elements
	int sz; // the number of elements
};

// simple user defined types
enum class traffic_light {green, yellow, red};
/* has only assingment, initilisation and comparisons */
// operator for a traffic_light
traffic_light& operator++(traffic_light& t){
	//increment light
	switch(t) {
		case traffic_light::green: 
			return t = traffic_light::yellow;
		case traffic_light::yellow:
			return t = traffic_light::red;
		case traffic_light::red:
			return t = traffic_light::green;
	}
}


double read_and_sum(int s) {
	Vector v(s); // make a vector of s elements
	
	for (int i = 0; i < v.size(); ++i)
		std::cin >> v[i]; // read in elements
	
	double sum = 0;
	for (int i = 0; i < v.size(); i++)
		sum += v[i]; // take the sum of the elements
	
	return sum;
}

int main() {
	std::cout << read_and_sum(3) << std::endl; // a Vector with six elements
	
	traffic_light intersection_2 = traffic_light::green;
	traffic_light next = ++intersection_2;
	if (next == traffic_light::yellow)  {
		std::cout << "Yellow Light!"; 
	}
	
	return 0;
}

/* There is no fundamental difference between a struct and 
a class. A struct is just a class with the members public by
default */