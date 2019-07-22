// Code for how this pointer helps in chaining the member functions.

#include<iostream>

using namespace std;

class ThisPointer
{
	int number = -6;
public:
	ThisPointer& asItIs()
	{
		number = 1*number;      // return *this specifies that we want to chain that function along with other functions.
		return *this;
	}
	
	ThisPointer& negation()
	{
		number = (-1)*number;
		return *this;
	}
	
	void get_number()
	{
		cout<<number;
	}
}; 

int main()
{
	ThisPointer number;
	number.asItIs().negation().negation().asItIs().negation();
	number.get_number();
	return 0;
}