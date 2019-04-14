#include<iostream>
using namespace std;
class counter
{	
	int count; 
	public:
	counter (int c)
	{
		count=c;
	}	
	int operator ++();
	int operator --();
	void display()
	{
		cout<<"Count="<<count<<endl;
	}
	
};
int counter::operator ++()
{
	return ++count;
}
int counter::operator --()
{
	return --count;
}
int main()
{
	counter c1(10);
	++c1;
	c1.display();
	--c1;
	c1.display();
	return 0;	
}
