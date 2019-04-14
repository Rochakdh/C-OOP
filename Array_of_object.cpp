#include<iostream>
using namespace std;
class employee
{
	char name[30];
	int roll;
	public:
		void input();
		void display();
};
void employee::input()
{
	cin>>name>>roll;
}
void employee::display()
{
	cout<<name<<roll<<endl;
}
int main()
{
	employee e;
	for (int i=1;i<3;i++)
	e[i].input();
	for (int i=1;i<3;i++)
	e[i].display();
	return 0;	
}
