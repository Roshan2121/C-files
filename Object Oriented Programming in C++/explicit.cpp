#include<iostream>
#include<string>

using namespace std;

class Practice
{
	double m_x;
	double m_y;
public:
	Practice(double x = 0.0, double y = 0.0)
	{
		m_x = x;
		m_y = y;
	}
	
	explicit Practice(double x = 0.0)
	{
		m_x = x;
		m_y = 10;
	}
	
	void getValue() { cout<<m_x<<" "<<m_y; }
};

int main()
{
	Practice object = 7;
	object.getValue();
	return 0;
}