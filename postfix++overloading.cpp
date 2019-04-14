#include<iostream>
using namespace std;
class counter
{	
	int count=0, count2=10; 
	public:	
	void operator ++()
	{
		count++;
	}
	void operator --()
	{
		count2--;
	}
	void display()
	{
		cout<<"Count="<<count<<endl;
		cout<<"Count2="<<count2<<endl;
	}
	
};
int main()
{
	counter c1;
	++c1;
	c1.display();
	--c1;
	c1.display();
	return 0;	
}
