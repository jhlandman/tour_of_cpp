/**********************************************************
** Author: Jayson Landman
** Description: first example using structs
**********************************************************/

#include <iostream>

using namespace std;

struct Vector {
	int sz; // number of elements
	double* elem; // pointer to elements
};

void vector_init(Vector& v, int s) {
	v.elem = new double[s]; // allocate an array of s doubles
	v.sz = s;
}

double read_and_sum(int s) {
	Vector v;
	vector_init(v, s); // allocate s elements for v
	
	for (int i = 0; i < s; ++i) 
		cin >> v.elem[i]; // read in the elements
	
	double sum = 0;
	for (int i = 0; i < s; ++i) 
		sum += v.elem[i];
	
	return sum;
}

/* there are lots of different ways to access 
   the struct members 

void f(Vector v, Vector& rv, Vector* pv) {
	int i1 = v.sz; // access through name
	int i2 = rv.sz; // access through reference
	int i4 = pv->sz; // access through pointer
	if ((i1 == i2) && (i2 == i4)) {
		cout << "all sizes were read";
	} else {
		cout << "all sizes were not read";
	}
}
*/

int main() {
	cout << "The sum is: " << read_and_sum(3) << endl;
	Vector v;
	vector_init(v, 5);
	f(v, v, v);
	return 0;
}