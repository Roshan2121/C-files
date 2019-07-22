#include<iostream>

using namespace std;

class A
{
	
	int x;
	
public:
	A(int y = 10)
	{
		cout<<"I am in A constructor\n";
		x = y;
	}
	
	void getValue()
	{
		cout<<"I am in A\n";
		cout<<x;
	}
	
};

class B : public A
{
	
	int z;
	
public:
	B(int y = 18)
	{
		cout<<"I am in B constructor\n";
		z = y;
	}
	
	void getValue()
	{
		cout<<"I am in B\n";
		cout<<z<<endl;
	}
	
};

int main()
{
	B object(56);
	object.getValue();
	object.A::getValue();
	return 0;
}