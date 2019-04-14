#include<iostream>
using namespace std;
void check(int value)
{
	try
	{
		if (value==1)
		 throw 1;
		if (value==2)
			throw 1.1;
		if (value==3)
			throw 'x';
		else 
			cout<<value<<endl;
	}
	catch(...)
	{
		cout<<"Exception Occured"<<endl;
	}
}int main()
{
	check(1);
	check(2);
	check(3);
	check(5);
}
