#include<iostream>
using namespace std;
class Base
{
	protected:
		int n;
	public:
		void input()
		{	
			cin>>n;
		}
};
class Derived:public Base
{
	protected:
	 int n;
	public:
	void input()
	{
		Base::input();//first base class iput is called
		cin>>n;
	}
	void dispaly()
	{
		cout<<Base::n-n;
	}
};
//By help of member function of the  of base class
int main()
{
	Derived d;
	d.input();//invoking base calss input and derived class input together;
	d.dispaly();
	return 0;
}
