//constant data member
#include<iostream>
using namespace std;
class constc
{
	const int data;
	public:
	constc():data(0){};//member initialixer list 
	constc(int a):data(a){};//member declarer list
	void display()
	{
		cout<<data<<endl;
	}
	int value()
	{
		return data;
	}
};
int main()
{
	constc o1;
	o1.display();
	constc o2(5);
	o2.display();
	cout<<o2.value();
	return 0;
	
}
