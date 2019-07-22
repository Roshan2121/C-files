#include<iostream>

using namespace std;

class Fraction
{
	int numerator;
	int denominator;

public:
	Fraction(int x = 1, int y = 1)
	{
		numerator = x;
		denominator = y;
	}
	
	void print()
	{
		cout<<numerator<<"/"<<denominator<<endl;
	}
	
	Fraction operator *(int x)
	{
		Fraction fraction;
		fraction.numerator = x * numerator;
		fraction.denominator = denominator;
		return fraction;
	}
	
	friend Fraction operator *(int x, Fraction& frac)
	{
		Fraction fraction;
		fraction.numerator = x * frac.numerator;
		fraction.denominator = frac.denominator;
		return fraction;
	}
	
	Fraction operator *(Fraction& frac)
	{
		Fraction fraction;
		fraction.numerator = numerator * frac.numerator;
		fraction.denominator = denominator * frac.denominator;
		return fraction;
	}
};

int main()
{
	Fraction f1(6, 8);
	f1.print();
	Fraction f2(3, 4);
	f2.print();
	Fraction f3 = f1 * 2;
	f3.print();
	Fraction f4 = 2 * f1;
	f4.print();
	Fraction f5 = f1 * f2;
	f5.print();
	Fraction f6 = f1 * f2 * 2;
	f6.print();
	return 0;
}