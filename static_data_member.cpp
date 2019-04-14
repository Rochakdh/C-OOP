//static data menber of the class
#include<iostream>
using namespace std;
class student
{
	char name[30];
	int roll;
	static char college[30];
	static char faculty[30];
	public:
		void input()
		{
			cout<<"name and roll";
			cin>>name;
			cin >>roll;
		}
		void display()
		{
			cout<<"name"<<name;
			cout<<"roll"<<roll;
			cout<<"college"<<college;
			cout<<"faculty"<<faculty;
		}
};
char student::college[30]="kec";//it must be defined outside of the class;
char student::faculty[30]="BCT";
int main()
{
	student s1,s2;
	s1.input();
	s2.input();
	s1.display();
	s2.display();
	return 0;
	
}

