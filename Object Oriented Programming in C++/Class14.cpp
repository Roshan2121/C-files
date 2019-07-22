//Overloading unary operators.

#include<iostream>

using namespace std;

class Practice
{
private:
	int x;
public:
	Practice(int y = 0) { x = y; }
	
	Practice operator -() 
	{
		Practice temp;
		temp.x = -x;
		return temp;
	}
	
	Practice operator !()
	{
		Practice temp;
		temp.x = !x;
		return temp;
	}
	
	int getValue() { return x; }
};

int main()
{
	Practice obj1(8);
	Practice obj2;
	Practice obj3;
	obj2 = -obj1;
	obj3 = !obj1;
	cout<<obj2.getValue()<<endl;
	cout<<obj3.getValue();
	return 0;
}