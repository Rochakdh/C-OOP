//adding feet and inches (1ft.=12inch)
#include<iostream>
using namespace std;
class distances{
	private:
		int inch, feet;
	public:
		void input()
		{
			cout<<"Enter Feet and Inches";
			cin>> feet>>inch;
		}
		void display()
		{
			cout<<feet<<"ft. and "<< inch <<"inch.";
		}
		distances adddis(distances d1, distances d2)
		{
			distances temp;
			temp.inch=d1.inch+d2.inch;
			temp.feet=d1.feet+d2.feet+temp.inch/12;
			temp.inch=temp.inch%12;
			return temp;
		}
//		distance subdis(distance d1, distance d2)
//		{
//			
//		}
};
int main()
{
	distances d1,d2,d3,d4;
	d1.input();
	d2.input();
	d3.adddis(d1,d2).display();
//	d4.subdis(d1,d2);
//	d3.display();
//	d4.dispaly();
}

