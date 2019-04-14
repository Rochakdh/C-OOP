#include<iostream>
using namespace std;
void check(int value) throw(int,double,char)
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
int main()
{

	try
	{
	check(0);
		check(2);
	check(3);
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
		catch (char c)
	{
		cout<<"character type excpetion"<<endl;
	}

}

