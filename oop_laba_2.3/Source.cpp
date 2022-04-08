#include "Fraction.h"
#include <iostream>

int main()
{
	Fraction f1, f2(1000, 99), f4;

	cin >> f1;
	cin >> f4;

	cout << "Zuslo 1:" << f1 << endl;
	cout << "Zuslo 2:" << f4 << endl;

	cout << "f2 = " << f2 << endl;
	cout << ++f2 << endl;
	cout << --f2 << endl;
	cout << f2++ << endl;
	cout << f2-- << endl;

	Fraction c = c.Sub(f1, f4); cout << "Sub = "<< c.Sub(f1, f4) << endl; 
	cout << operator < (f1, f4) << endl;
	cout << operator == (f1, f4) << endl;
	cout << operator > (f1, f4) << endl;
	cout << operator <= (f1, f4) << endl;
	cout << operator != (f1, f4) << endl;
	cout << operator >= (f1, f4) << endl;
	
	return 0;
}