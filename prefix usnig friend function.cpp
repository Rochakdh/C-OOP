#include<iostream>
using namespace std;
class abc
{	
	int count1; 
	public:
	abc()
	{
		count1=0;
	}
	abc (int c)
	{
		count1=c;
	}	
	void display()
	{
		cout<<"Count="<<count1<<endl;
	}
	friend abc operator ++(abc&);
	friend abc operator --(abc&);
	
};
abc operator ++(abc&c2)
{
	abc temp;
	temp.count1= ++c2.count1;
	return temp;
}
abc operator --(abc&c2)
{
	abc temp;
	temp.count1= --c2.count1;
	return temp;
}
int main()
{
	abc c1(10);
//	++c1;
	c1.display();
	--c1;
	c1.display();
	return 0;	
}
