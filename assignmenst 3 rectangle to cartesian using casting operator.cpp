#include<iostream>
#include<math.h>
using namespace std;
class polar;
class rectangle
{
	int x,y;
	public:
		void input()
		{
			cin>>x>>y;
		}
		operator polar();
};
class polar
{
	int radius,angle;
	public:
		polar()
		{
			radius=0;
			angle=0;	
		}
		polar(int r, int a)
		{
			radius=r;
			angle=a;	
		}
		void display()
		{
			cout<<radius<<" "<<angle;
		}		
};
rectangle::operator polar()
{
	int x1=sqrt(x*x+y*y);
	int y1=(atan(y/x))*(180/3.14);
	polar temp(x1,y1);
	return temp;
}
int main()
{
	rectangle r1;
	r1.input();
	polar pol;
	pol=r1;
	pol.display();

}
