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
	d.Base::input();
    d.input();
	d.dispaly();
	return 0;
}
