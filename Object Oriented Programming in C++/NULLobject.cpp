#include<iostream>

using namespace std;

class Practice
{
	int x;
	int y;
public:
	Practice(){}
	Practice(int a, int b)
	{
		x = a;
		y = b;
	}
	void ifNull()
	{
		if(this->x == NULL && this->y == NULL)
			cout<<"This object is a null object\n";
		else
			cout<<"This object is not a null object\n";
	}
	void getValue()
	{
		cout<<x<<" "<<y<<endl;
	}
};

int main()
{
	Practice object;
	Practice object2;
	Practice object3;
	object.ifNull();
	object2.ifNull();
	object3.ifNull();
	object3.getValue();
	return 0;
}