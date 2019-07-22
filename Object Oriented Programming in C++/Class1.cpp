/* Defifnig a Class and its object. Initializing the objects of a class and how to use them. */

#include<iostream>

using namespace std;

class Practice
{
	public:
		int age;
		string name;
		long salary;
		
		void printer()
		{
			cout<<"A preson with name "<<name<<" is aged "<<age<<" and earns a salary of "<<salary<<" per month ";
		}
};

int main()
{
	Practice roshan;
	cin>>roshan.age;        //You can use cin or uniform initialization or assignment method....
	cin>>roshan.name;       // roshan{19, "Roshan", 2800000}; or roshan = {19, "Roshan", 2800000};
	cin>>roshan.salary;
	cout<<roshan.age<<"\n";
	roshan.printer();
	return 0;
}