//First assignment.

#include<iostream>

using namespace std;

class IntPair
{
	public:
		int num_one;
		int num_two;
		
		void initialize()
		{
			cin>>num_one>>num_two;
		}
		
		void printer()
		{
			cout<<"First Number = "<<num_one<<" "<<" Second Number = "<<num_two;
		}
};

int main()
{
	IntPair integers;
	integers.initialize();
	integers.printer();
	return 0;
}