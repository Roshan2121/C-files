//Overloading Operators.

#include<iostream>
using namespace std;

class Over
{
	int x;
public:
	Over(int y = 8) { x = y; }
	// When adding two objects.
	Over operator +(Over& object)
	{
		Over temp;
		temp.x = this->x + object.x;
		return temp;
	}
	//When adding object and variable of any other type. eg. object + 10  which will call ---->(operator+(object, 10)) 
	// In the same order i.e. operator+(object, 10) and not operator+(10, object)
	Over operator +(int y)
	{
		Over temp;
		temp.x = this->x + y;
		return temp;
	}
	//Same job as that of the function above.
	//Friend function is not a member function but it can access any data from the class to which it is friend to.
	/*friend Over operator +(Over& object, int y)
	{
		Over temp;
		cout<<"I am in Friend Function!!";          //As this function and above one are ment for the same job.
		temp.x = y + object.x;                      //Donot define both the functions as it will lead to ambiguous case.
		return temp;     // i.e. compiler will  not get which function to execute out of the two. Hence I am commenting this function.
	}*/
	//When adding a variable of other type and an object.
	//+ operator will call the function operator+(other type, object) eg. (10 + two) will call operator(10, object).
	/* This function should be a friend function as we want this function to use the contents of the class and also 
	we have to call this function without using an object. Because + here calls operator+(any type, object) and not
	object.operator+(any type). This is possible with a Friend Function. */
	friend Over operator +(int y, Over& object)
	{
		Over temp;
		temp.x = y + object.x;
		return temp;
	}
	
	int getValue() { return x; }
};

int main()
{
	Over one, two(10), three;   //two + 10 would call two.operator+(10) or operator+(two, 10).
	three = two + 10;        // operator+(10, two).
	cout<<"Output from class = "<<three.getValue()<<endl; //one + two would call one.operator+(two) or operator+(one, two).
	three = one + two + 80;
	cout<<three.getValue();
	return 0;
}
//Basically this was for binary operators.

/* In the line 53 we have used + operator more than once. Whiat it does is eg. A + B + C, it will consider A and B.
operator+(A, B) + C. Let the result of ths function be X. Hence X + C is operator(X, C) will be executed. That is the
execution starts from left. */