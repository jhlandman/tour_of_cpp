#include <iostream>

using namespace std;

double square(double x) {
	return x * x;
}

void print_square(double x) {
	cout << "the square of " << x << " is " << square(x) << endl;
}

void print_arr() {
	int v[] = {0, 1, 2};
	
	for (auto x:v) 
		cout << x << endl;
	
	for (auto& x:v) // x here just refers to an element
		++x;
}



int main() {
	print_square(1.234);
	print_arr();
}