#include <iostream>
using namespace std;
class dista
{
	int m,km,T; 
	public:
	void input()
	{
		cin>>km>>m;
	}
	void display()
	{
		cout<<"km="<<km<<"    m="<<m<<endl;
    }
	friend dista operator +(int,dista);
};
dista operator +(int p, dista d)
{
	dista temp;
	int t=temp.km*1000+temp.m;
	int t1=p+t;
	temp.km=t/1000;
	temp.m=t%1000;
	return temp;
}
int main()
{
	dista d1,d2;
	d1.input();
	d2=9+d1;
	d2.display();
	return 0;
}


