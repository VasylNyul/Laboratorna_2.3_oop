#pragma once

#include <iostream>
#include <string>

using namespace std;

class Fraction
{
private:
	long first;
	unsigned short second;
public:
	int get_a() const { return first; };
	int get_b() const { return second; };
	void set_a(unsigned int value);
	void set_b(unsigned int value);

	Fraction();
	Fraction(long, unsigned short);
	Fraction(const Fraction&);

	Fraction& operator = (const Fraction&);
	operator string() const;

	Fraction& operator ++();
	Fraction& operator --();
	Fraction operator ++(int);
	Fraction operator --(int);

	friend ostream& operator <<(ostream&, const Fraction&);
	friend istream& operator >>(istream&, Fraction&);


	Fraction Sub(Fraction&, Fraction&);

	friend bool operator < (Fraction&, Fraction&);
	friend bool operator == (Fraction&, Fraction&);
	friend bool operator > (Fraction&, Fraction&);
	friend bool operator <= (Fraction&, Fraction&);
	friend bool operator != (Fraction&, Fraction&);
	friend bool operator >= (Fraction&, Fraction&);

};

