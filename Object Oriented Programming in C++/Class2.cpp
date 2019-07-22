/* Private and public access specifiers */

#include<iostream>

using namespace std;

class IntPair    //defining a class....
{
	int a;
	int b;          //Two integer variables defined privately....
	public:
		void initialize()
		{
			cin>>a>>b;       //This line shows that public mambers inside the class can access private members....
		}
		
		int assigner(const IntPair& d)     //Passing an object of the class as an arguement....
		{
			int c;
			c = d.a;        // d.a is the private member of the object integers. Public members can use private members of object of the same class....
			return c;
		}
};

int main()
{
	IntPair integers;
	integers.initialize();      // Assignes values to private variables a and b....
	int k = integers.assigner(integers);    //Assignes the value of private member a to local variable k....
	cout<<k;
	return 0;
}