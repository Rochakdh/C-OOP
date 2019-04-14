#include<iostream>
using namespace std;
class triangle
{
	private:
		float side1,side2,side3;
	public:
	triangle()//Default constructor (same name as class)
	{
		side1=3.5;
		side2=5.5;
		side3=6.5;
	}
	void perimeter();
	
};
void triangle::perimeter()// defining member function of class triangke outside of the class
{
	float pmeter=side1+side2+side3;
	cout<<"perimeter is"<<pmeter<<endl;
	
}
int main()
{
	triangle t1,t2;//creating object of triangle this means now the default constructer is invoked here
	t1.perimeter();
	t2.perimeter();
	return 0;
	
}
