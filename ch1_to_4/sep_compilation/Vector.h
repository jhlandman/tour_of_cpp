/******************************************************
** Author: Jayson Landman
** Description: Vector interface
******************************************************/

// basically all of the was to call the class and
// the properties it has
class Vector {
public:
	Vector(int s);
	double& operator[](int i);
	int size();
private:
	double* elem; // points to an array of doubles
	int sz;
};