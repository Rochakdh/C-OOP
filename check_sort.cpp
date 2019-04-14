#include<iostream>
#include<fstream>
using namespace std;
class student
{
	int roll;
	char name[30];
	float marks;
	public:
		void input()
		{
			cin>>roll>>marks>>name;
		}
		void display()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Roll:"<<roll<<endl;
			cout<<"Marks"<<marks;
		}
		int check(int r)
		{
			if (r==roll)
				return 1;
			else
				return 0;
		}
};
void add()
{
	student s[5];
	fstream fout;
	fout.open("Student.txt",ios::out|ios::app|ios::binary);
	for (int i=0;i<5;i++)
	{
		s[i].input();
		fout.write((char*)&s,sizeof(s));
	}
	fout.close();
}
void display()
{
	student s;
	fstream fin;
	fin.open("Student.txt",ios::in|ios::binary);
	while(fin.read((char*)&s,sizeof(s)))
		{
			s.display();	
		}
	fin.close();
}
void sort()
{
	student s;
	fstream fin;
	int roll;
	cout<<"Enter sort";
	cin>>roll;
	int flag=0;
	fin.open("Student.txt", ios::in | ios::binary);
	while(fin.read((char*)&s,sizeof(s)))
	{
		if(s.check(roll))
		{
			s.display();
			flag=2;
			break;
	 	}	
	}
	if (flag==0)
		{
			cout<<"good not found"<<endl;
		}
}
int main()
{
	add();
	sort();
}


