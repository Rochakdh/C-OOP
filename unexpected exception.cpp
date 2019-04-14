#include<iostream>
using namespace std;
void test()
{
	cout<<"unexpected exception";
}
void check(int value) throw(double)
{
	if (value==1)
		throw 2;
	if (value==2)
		throw 1.1;
	else 
		cout<<value<<endl;

}
int main()
{
	set_unexpected(test);
	try
	{
		check(1);
	}
		catch(int a)
	{
		cout<<"int type excpetion"<<endl;
	}
	catch (double d)
	{
		cout<<"float type excpetion"<<endl;
	}

}

