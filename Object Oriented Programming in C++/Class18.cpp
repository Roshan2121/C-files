//Ponters and Reference to the base class of derived objects.

using namespace std;

class A{
	int x;
	public:
		void setValue(int y = 10)
		{
			x = y;
		}
		
		void getValue()
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
		
		void getValue()
		{
			cout<<z<<endl;
		}
};

int main()
{
	B obj;
	A &obj2 = obj;   //obj2 is the reference variable of obj1 and has access only to the contents of Base class.
	A *obj3 = &obj;   //obj3 is the pointer variable that is it holds the adderss of the obj and has access only to the contents of Base class.
	//Its obvious as both are of type A they can see only the members of A and not B.
	obj2.setValue(30);   //Calls the setValue of A and assigns x yo 30.
	obj3->setValue(50);   //Calls the setValue of A and assigns x to 50.
	obj2.getValue();     //prints 50. value of x.
	obj3->getValue();    //prints 50. value of x.
	//Prints same value because both of them refer to the same instance of the derived object.
	return 0;
}