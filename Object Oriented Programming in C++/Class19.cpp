//Virtual Functions.

#include<iostream>

using namespace std;

class A{
	int x;
	public:
		void setValue(int y = 10)
		{
			x = y;
		}
		
		virtual void getValue()
		{
			cout<<x<<endl;
		}
};

class B : public A{
	int z;
	public:
		void setValue(int y = 10)
		{
			z = y;
		}
		
		virtual void getValue()
		{
			cout<<z<<endl;
		}
};

int main()
{
	B obj;
	A &obj2 = obj;   //obj2 is the reference variable of obj1 and has access only to the contents of Base class.
	obj.setValue();  //Calls setValue of B.
	obj2.setValue(50);  //Calls setValue of A.
	obj2.getValue(); //Calls getValue of B not A!! Virtual Functions concept.
	return 0;
}