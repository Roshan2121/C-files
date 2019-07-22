//Basics of Inheritance.

#include<iostream>
#include<string>

using namespace std;

class Sports
{
public:
	string type;
	Sports(string type = "OutDoor")
	{
		this->type = type;
	}
};

class Cricket : public Sports
{
	public:
	string name;
	string country;
	
	void setValue(string name = "Cricket", string country = "England")
	{
		this->name = name;
		this->country = country;
	}
	
	void getValue()
	{
		cout<<"The game of "<<name<<" was started by "<<country<<endl;
		cout<<"It is one of the "<<type<<" game ";
	}
};

class Chess : public Sports
{
public:
	string name;
	string country;
	
	void setValue(string name = "Chess", string country = "India")
	{
		this->name = name;
		this->country = country;
	}
	
	void getValue()
	{
		cout<<"The game of "<<name<<" was invented by "<<country<<endl;
		cout<<"It is one of the "<<type<<" games ";
	}	
};

int main()
{
	Cricket sport1;
	Chess sport2;
	sport2.type = "Indoor";
	sport2.setValue();
	sport2.getValue();
	return 0;
}