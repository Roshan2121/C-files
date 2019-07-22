//Concept of const member functions.

#include<iostream>

using namespace std;

class Practice
{
	int x;
public:
	Practice() { x = 6; }
	int get_value() const
	{
		//x = x + 1;   Wrong!! Because constant functions have no right to change the value of any const or non-const member variable
		return x;
	}
};

int main()
{
	Practice object;         //const member functions work both for const or non-const member variables.
	cout<<object.get_value();     
	return 0;
}

/*	On Function Overloading....
	const object ----> calls const member function
	non-const object ----> priority 1). non-const member function (can change the value of member variables)
									2). const-member function (cannot change the value of the member variables). */