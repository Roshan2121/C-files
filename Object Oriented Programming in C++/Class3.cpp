// How Constructors and Destructors work....

#include<iostream>

using namespace std;

class Practice
{
	int x;
public:
	Practice()
	{
		cout<<"Inside default constructor\n";
		x = 10;
	}
	Practice(int y)
	{
		cout<<"Inside constructor\n";
		x = y;
	}
	
	~Practice()
	{
		cout<<"Inside Destructor";
	}
};

int main()
{
	Practice x;
	return 0;
}