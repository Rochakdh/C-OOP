//static member function
#include<iostream>
using namespace std;
class student
{
	char name[30];
	int roll;
	static int id;
	
	public:
		void input()
		{
			cout<<"name and roll";
			cin>>name;
			cin>>roll;
		}
		static void colz_name();
		void display()
		{
			cout<<"name:"<<name<<endl;
			cout<<"roll"<<roll<<endl;
		}
};
//int student::id=0;
void student::colz_name()
{
	cout<<"College :Kec"<<endl;
	int id=5;
	cout <<"id: "<<id<<endl;
	// cout<<roll;// it cant be used as roll is not a static data member;
}
int main()
{
	student s1,s2;

	s1.input();
	s2.input();
	student::colz_name();
	s1.display();
	s2.display();
	
	return 0;
	
}
