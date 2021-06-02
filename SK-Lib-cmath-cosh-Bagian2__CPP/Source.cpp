// CPP program to demonstrate the
// cosh() function
#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VB2019
*/

using namespace std;

int main() {
	double x = 4.1, result;

	result = cosh(x);
	cout << "cosh(4.1) = " << result << endl;

	// x in Degrees
	double xDegrees = 90;
	x = xDegrees * 3.14159 / 180;

	result = cosh(x);
	cout << "cosh(90 degrees) = " << result << endl;

	_getch();
	return 0;
}
