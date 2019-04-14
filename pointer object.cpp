//in polymorpshim we work by creating the poiter object 0f base class
#include<iostream>
using namespace std;
class base
{
	public:
		int M;
		void display()
		{
			cout<<"vlaue of M="<<M<<endl;
		}
	
};
class derived: public base
{
	public:
		int D;
		void display()
		{
			cout<<"the vlaue of D is"<<D<<endl;
		}
};
int main()
{
	base *B1;//Depends upon the pointer of the object
	derived d;
	base b;
	B1=&d;//doesnt depend upon to which object it is pointing;
	B1->M=5;
	B1->display();
	derived *d1;
	d1=&d;
	d1->D=15;
	d1->display();
	return 0;
	
}
