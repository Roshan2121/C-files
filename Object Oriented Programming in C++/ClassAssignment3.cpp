#include<iostream>

using namespace std;

enum Result
{
	RESULT_NO,
	RESULT_YES,
};

class Point3d
{
	int m_x;
	int m_y;
	int m_z;
public:
	void setValues(int x, int y, int z)
	{
		m_x = x;
		m_y = y;
		m_z = z;
	}
	
	Result isEqual(const Point3d& point2)
	{
		if(m_x == point2.m_x && m_y == point2.m_y && m_z == point2.m_z)
			return RESULT_YES;
		else
			return RESULT_NO;	
	}
};

int main()
{
	Point3d point1;
	Point3d point2;
	point1.setValues(10, 20, 30);
	point2.setValues(10, 20, 30);
	Result result = point1.isEqual(point2);
	if(result == RESULT_YES)
		cout<<"The two coordinates are equal";
	else
		cout<<"The two coordinates are not equal";		
	return 0;
}