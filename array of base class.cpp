//Neeed of the virtual function;
#include <iostream>
using namespace std;
class Animal
{
	public:
		virtual	void display()
		{
			cout<<"Animal Class"<<endl;
		}
};
 class Snake:public Animal
 {
 		void display()
		{
			cout<<"Animal: Snake Class"<<endl;
		}	
 };
  class Cow:public Animal
 {
 	void display()
	{
		cout<<"Animal: Cow Class"<<endl;
	}	
 };
  class Dog:public Animal
 {
 		void display()
		{
			cout<<"Animal: Dog Class"<<endl;
		}	
 };
 
 int main()
 {
 	Animal a1;
 	Snake s1;
 	Dog d1;
 	Cow c1;
 	Animal *A[]={&a1,&s1,&d1,&c1};
 	for (int i=0;i<4;i++)
 	{
 		A[i]->display();
	}
	return 0;
 }
