#include<iostream>
using namespace std;
class check
{
	int x,y;
	public:
	check()
	{
		x=0;
	}
	check(int a)
	{
		x=a;
    } 
	void display()
	{
		cout<<x<<endl;
	}
	friend void operator ++(check&);
	friend void operator --(check&);
};
void operator ++(check& c)
	{
		++c.x;
	}
void operator --(check& c)
	{
		--c.x;
	}
int main()
{
	check c1(5),c2;
	++c1;
	--c2;
	c1.display();
	c2.display();
	return 0;
	
}
