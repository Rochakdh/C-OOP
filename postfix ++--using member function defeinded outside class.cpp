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
	void operator ++(int);
	void operator --(int);
};
void check::operator ++(int)
	{
		x++;
	}
void check::operator --(int)
	{
		x--;
	}
int main()
{
	check c1(5),c2(4);
	check c3;
	c1++;
	c2--;
	c1.display();
	c2.display();
	return 0;	
}
