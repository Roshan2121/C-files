// Defining member functions outside the class.

#include<iostream>

using namespace std;

class EasyClass
{
	int x = 5, y = 8;
public:
	void add();
	void subtract();
};

void EasyClass::add()
{
	cout<<x + y<<endl;
}

void EasyClass::subtract()
{
	cout<<x - y;
}

int main()
{
	EasyClass operations;
	operations.add();
	operations.subtract();
	return 0;
}