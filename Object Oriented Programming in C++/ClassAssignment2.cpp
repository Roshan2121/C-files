//Second assignment.

#include<iostream>

using namespace std;

class Point3d    //defining a class....
{
	int m_x;
	int m_y;
	int m_z;
	
public:
	void setValues()
	{
		cin>>m_x>>m_y>>m_z;
	}
	
	void printer()
	{
		cout<<"<"<<m_x<<", "<<m_y<<", "<<m_z<<">";
	}
};

int main()
{
	Point3d coordinates;
	coordinates.setValues();
	coordinates.printer();	
	return 0;
}