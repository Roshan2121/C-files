//Friend Function and Friend Class.
// Normal Functions can use only public data but Friend Functions and classes can use private data also.

#include<iostream>

using namespace std;

class India
{
	int districts;
	int states;
public:
	India()
	{
		districts = 543;
		states = 31;
	}
	friend void display(India object);
};

int main()
{
	India info;
	display(info);
	return 0;
}

void display(India object)
{
	cout<<"Number of states in India = "<<object.states<<endl<<"Number of districts in India = "<<object.districts;
}