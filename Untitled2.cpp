#include <iostream>
using namespace std;
class pp
{
	int a,b;
	public:
		pp()
		{
			a=5;
			b=-5;
		}
		void show()
		{
			cout<<" a="<<a<<"and b="<<b;
 
		}
		friend pp operator --(pp &);
		friend void operator --(pp &,int);
 
};
pp operator --(pp &obj)
{
	pp temp;
	temp.a=--obj.a;
	temp.b=--obj.b;
	return temp;
}
void operator --(pp &ob1,int)
{
	ob1.a--;
	ob1.b--;
}
int main()
{
	pp p,p1;
	cout<<"Before prefix decrement";
	p.show();
    --p;
	cout<<"\nAfter prefix decrement";
	p.show();
   cout<<"\nBefore postfix decrement";
	p1.show();
	p1--;
    cout<<"\nAfter postfix decrement";
    p1.show();
 
}

