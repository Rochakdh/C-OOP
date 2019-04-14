#include<iostream>
#include<math.h>
using namespace std;
class polar;
class rectangle
{
	float x,y;
	public:
		rectangle()
		{
			x=0.0;
			y=0.0;	
		}
		rectangle(float x1, float x2)
		{
			x=x1;
			y=x2;	
		}
		void display()
		{
			cout<<"("<<x<<","<<y<<")"<<endl;
		}
		operator polar();
};
class polar
{
	float radius,angle;
	public:
		polar()
		{
			radius=0.0;
			angle=0.0;	
		}
		polar(float r, float a)
		{
			radius=r;
			angle=a;	
		}
		void display()
		{
			cout<<"("<<radius<<","<<angle<<")"<<endl;
		}
		operator rectangle();	
};
rectangle::operator polar()
{
	float x1=sqrt(x*x+y*y);
	float y1=(atan(y/x))*(180/3.14);
	polar temp(x1,y1);
	return temp;
}
polar::operator rectangle()
{
	float x=radius*cos(angle*(3.14/180));
	float y=radius*sin(angle*(3.14/180));
	rectangle temp1(x,y);
	return temp1;
}

int main()
{
	rectangle r1(10,20),r2;
	polar pol1,pol2(22,63);
	pol1=r1;
	r1.display();
	pol1.display();
	r2=pol2;
	pol2.display();
	r2.display();
	return 0;
}
