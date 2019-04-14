#include<iostream>
using namespace std;
class second;//forward declaration;
class first
{
	int data;
	public:
		void ip()
		{
			cin>>data;	
		}
		void add(second);
};

class second
{
	int data2;
	public:
		void ip()
		{
			cin>>data2;	
		}
	friend void first::add(second s1);
};
void first::add(second s1)
{
	int sum=data+s1.data2;
	cout<<"Summm="<<sum;
}
int main()
{
	first f;
	second s;
	f.ip();
	s.ip();
	f.add(s);
	return 0;
}
