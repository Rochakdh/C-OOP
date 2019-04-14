#include<iostream>
using namespace std;
void ucatched()
{
	cout<<"uncatched exception";
}
void check(int value) 
{
	set_terminate(ucatched);
	try
	{
	if (value==1)
		throw 1;
	}
	catch(char c)
	{
		cout<<"Char exception";
	}
}
int main()
{
	check (1);
	return 0;
}
	
