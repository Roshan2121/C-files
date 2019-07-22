//What really happens when we instantiate a Derived Class.

#include<iostream>

using namespace std;

class A
{
	
public:
	int x;
	
	A() { cout<<"I am in Default A\n"; x = 18; }
	A(int y) { cout<<"I am in Parameter A\n"; x = y; }
	void getValue() { cout<<x<<endl; }
	
};

class B : public A
{
	
public:
	int a;
	
	B() { cout<<"I am in Default B\n"; a = 90; }
	B(int y): A(190) { cout<<"I am in Parameter B\n"; a = y; }   //Calling constructor inside the function body is not working. why??
	void getValue() { cout<<x<<" "<<a<<endl; }
	
};

int main()
{
	A obj1;
	B obj2(70);
	obj1.getValue();
	obj2.getValue();
	return 0;
}

//What happens when derived object is created.
//1)The memory is allocated wich is enough for both base and derived class instances.
//2)As the derived object is created Default constructor gets called.
/*3)Compiler will search for if there is any constructor mentioned to set the base part of the object.
If yes then it will execute that particular constructor from bass class and sets the values of the 
base class instances. If not there then it will call for default constructor from base class.*/
//4)Then afrerning from the base class constructorthe control is returned to the derived class constructor.
//5)Then the control is returned to the main from the derived class constructor.
