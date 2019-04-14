#include<iostream>
using namespace std;
class constc
{
	const int data;
	public:
	constc():data(0){};
	constc(int a):data(a){};
	void display()
	{
		cout<<data<<endl;
	}
};
int main()
{
	constc o1;
	o1.display();
	constc o2(5);
	o2.display();
	return 0;
	
}
