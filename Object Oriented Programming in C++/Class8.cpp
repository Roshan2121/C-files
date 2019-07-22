#include<iostream>

using namespace std;

class Practice
{
public:
	static int x;
};

int Practice::x;


int main()
{
	//Practice::x = 78; If we want to use the static member without an object.
	Practice object;
	object.x = 6;
	cout<<object.x;
	return 0;
}