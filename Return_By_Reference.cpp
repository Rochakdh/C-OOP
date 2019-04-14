#include<iostream>
using namespace std;
//int& max(int &x,int &y)
//{
//	if (x>y)
//	return x;
//	else
//	return y;
//}
//int main()
//{
//	int a=50,b=10;
//	cout<<a<<","<<b;
//	max(a,b)=0;
//	cout<<"\n" <<a<<","<<b;
//	return 0;
//	
//}
int& abc(int &x)
{
return x;
}
int main()
{
	int a=5;
	abc(a)=100;
	cout<<"\n" <<a;
	return 0;
	
}

