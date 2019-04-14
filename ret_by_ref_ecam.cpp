//pass by reference
#include <iostream>
using namespace std;
int &min (int &a,int &b)
{
	if (a<b)
	return a;
	else
	return b;
}
int main ()
{
	int x=3, y=4;
	cout<<"initially: x= "<<x<<" and y="<<y <<endl;
	min(x,y)=0;
	cout<<"finally: x= "<<x<<" and y="<<y;
	return 0;
}
