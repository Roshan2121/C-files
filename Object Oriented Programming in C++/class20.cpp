#include<iostream>

using namespace std;

class Fruits
{
public:
	int a;
	Fruits(){
		a = 10;
	}
};

class Apple : public Fruits
{
public:
	int b;
	int c;
	Apple(){
		b = 20;
		c = 30;
	}
};

int main()
{
	Apple obj1;
	Fruits obj2 = obj1;
	cout<<&obj1<<" "<<&obj2<<endl;  //addresses are different hence the two objects are pointing to different locations.
	cout<<obj2.a;      //b and c are sliced of as obly the base part is copied from obj1 to obj2.
	obj2.a = 40;
	cout<<endl<<obj2.a;
	cout<<endl<<obj1.a<<" "<<obj1.b<<" "<<obj1.c;
	return 0;
}