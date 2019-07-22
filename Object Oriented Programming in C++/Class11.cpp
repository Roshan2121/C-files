//We can have enum, struct or another class inside a class.

#include<iostream>

using namespace std;

struct Struct
{
	int x;
	float y;
};

class India
{
	Struct type;
public:
	India()
	{
		type.x = 8;
		type.y = 12.68;
	}
	friend void printer(India object);
};

void printer(India object)
{
	cout<<object.type.x<<endl;
	cout<<object.type.y;
}

int main()
{
	India info;
	printer(info);
	return 0;
}