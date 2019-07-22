//Overloading Post and Pre Increment operators.

#include<iostream>

using namespace std;

class Incre
{
	int x;

public:
	Incre(int y = 1) { x = y; }
	
	Incre operator ++()
	{
		Incre object;
		x = x + 1;
		object.x = x;
		return object;
	}
	
	Incre operator ++(int)
	{
		Incre object;
		object.x = x;
		x = x + 1;
		return object;
	}
	
	int getValue()
	{
		return x;
	}
};

int main()
{
	Incre postObject(89);
	Incre preObject(89);
	Incre increTest;
	increTest = postObject++;
	cout<<"increTest = "<<increTest.getValue()<<" object "<<postObject.getValue()<<endl;
	increTest = ++preObject;
	cout<<"increTest = "<<increTest.getValue()<<" object "<<preObject.getValue();
	return 0;
}