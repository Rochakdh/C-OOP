#include<iostream>
using namespace std;
template <class T>
void func(T a, T b)
{
	cout<<a<<","<<b<<endl;
	cout<<"From Template0 func"<<endl;
}
template <class T1, class T2>
void func (T1 a ,T2 b)
{
	cout<<a<<","<<b<<endl;
	cout<<"From tempalte1 func"<<endl;
	
}
int main()
{
	func(5,6);
	func(6.4,3);
	return 0;
}

