#include<iostream>

using namespace std;

class Practice
{
	int x;
	Practice(int y = 10) { x = y; }
public:
	static Practice& getInstance()
	{
		static Practice assign;
		return assign;
	}
	
	void setValue(int y = 8) { this->x = y; }
	
	void getValue() { cout<<this->x<<endl; }
};

int main()
{
	Practice& object = Practice::getInstance();
	Practice& obj2 = Practice::getInstance();
	object.setValue(10);
	object.getValue();
	obj2.setValue(12);
	obj2.getValue();
	object.getValue();
	return 0;
}