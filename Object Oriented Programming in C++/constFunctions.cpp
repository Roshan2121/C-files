#include<iostream>

using namespace std;

class Practice
{
	int x = 0;
public:
	void getValue() const        //const objects can call only const functions.
	{
		cout<<x;
	}
};

int main()
{
	const Practice object;
	object.getValue();
	return 0;
}