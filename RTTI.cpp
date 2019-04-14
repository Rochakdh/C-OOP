//Concpet of pure virtual function
#include <iostream>
using namespace std;
class polygon
{
	protected: 
	float length;
	float height;
	public:
		virtual float area()=0;
};
class Rectangle:public polygon
{
	public:
		Rectangle (float l,float b)
		{
			length=l;
			height=b;
		}
		float area()
		{
			return (length*height);
		}
};
class Triangle:public polygon
{
	public:
		Triangle (float l,float b)
		{
			length=l;
			height=b;
		}
		float area()
		{
			return (0.5*length*height);
		}
};
int main()
{
	polygon *p;
	Rectangle r(5.0,6.6);
	Triangle t(5.5,7.5);
	p=&r;
	cout<<"area of rectangle is"<<p->area();
	p=&t;
	cout<<"area of triangle is"<<t->area();
	return 0;
	
}


