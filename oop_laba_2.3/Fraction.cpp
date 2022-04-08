#include "Fraction.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <sstream>

using namespace std;

void Fraction::set_a(unsigned int value)
{
	if (value >= 1000)
	{
		first = value;
	}
	else
	{
		cout << "Error in value of long!" << endl;
	}
}

void Fraction::set_b(unsigned int value)
{
	if (value >= 0  && value < 100)
	{
		second = value;
	}
	else
	{
		cout << "Error in value of unsigned short!" << endl;
	}
}

Fraction::Fraction()
	: first(0), second(0)
{}

Fraction::Fraction(long f, unsigned short s)
{
	set_a(f); set_b(s);
}

Fraction::Fraction(const Fraction& f)
{
	*this = f;
}

Fraction& Fraction::operator = (const Fraction& f)
{
	first = f.first;
	second = f.second;

	return *this;
}

Fraction::operator string() const
{
	stringstream ss;

	ss << "Zufra = " << first << "," << second << endl;

	return ss.str();
}

Fraction& Fraction::operator ++()
{
	first++;
	return *this;
}

Fraction& Fraction::operator --()
{
	first--;
	return *this;
}

Fraction Fraction::operator ++(int)
{
	Fraction t(*this);
	if (second == 99)
	{
		second = 0;
		++* this;
	}
	else
		++second;

	return t;
}

Fraction Fraction::operator --(int)
{
	Fraction t(*this);
	if (second == 0)
	{
		second = 99;
		--* this;
	}
	else
		--second;
	return t;
}

ostream& operator <<(ostream& out, const Fraction& f)
{
	out << string(f);
	return out;
}
istream& operator >>(istream& in, Fraction& a)
{
	cout << "Zila chastuna = "; in >> a.first;
	cout << "drobova chastuna = "; in >> a.second;

	return in;
}

Fraction Fraction::Sub(Fraction& x, Fraction& y)
{
	Fraction s;

	s.first = x.first - y.first;
	s.second = x.second - y.second;

	return s;
}

bool operator < (Fraction& f, Fraction& s)
{
	return f.first < s.first || f.first == s.first && f.second < s.second ;
}

bool operator == (Fraction& f, Fraction& s)
{
	return f.first == s.first && f.second == s.second;
}

bool operator > (Fraction& f, Fraction& s)
{
	return f.first > s.first || f.first == s.first && f.second > s.second;
}
bool operator <= (Fraction& f, Fraction& s)
{
	return !(f.first < s.first || f.first == s.first && f.second < s.second);
}

bool operator != (Fraction& f, Fraction& s)
{
	return !(f.first == s.first && f.second == s.second);
}

bool operator >= (Fraction& f, Fraction& s)
{
	return !(f.first > s.first || f.first == s.first && f.second > s.second);
}

