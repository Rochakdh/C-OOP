#include<iostream>
using namespace std;
class dist
{
	int km,m;
	public:
	void input()
	{
		cin>>km>>m;
	}
	void dispaly()
	{
		cout<<km<<"km"<<" "<<m<<"m";
	}
	friend dist operator +(int,dist);
};
dist operator +(int p, dist d)
{
	dist temp;
	int total=d.km*1000+d.m;
	int add=p+total;
	temp.km=add/1000;
	temp.m=add%1000;
	return temp;		
}
int main()
{
	dist d1,d2;
	d1.input();
	d2=9+d1;
	d2.dispaly();
	return 0;
}

