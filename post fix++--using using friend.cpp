#include<iostream>
using namespace std;
class check
{
	int x;
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
	friend void operator ++(check&,int);
	friend void operator --(check&,int);
	
	};
void operator ++(check& c,int)
	{
		c.x++;
	}
void operator --(check& c,int)
	{
		c.x--;
	}
int main()
{
	check c1(5),c2;
	c1++;
	c2--;
	c1.display();
	c2.display();
	return 0;
	
}
