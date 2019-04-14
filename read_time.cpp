#include <iostream>
using namespace std;
class time{
	private:
		int hr,min,sec;
	public:
		void input_time();
		void diplay()
		{
			cout<<hr<<":"<<min<<":"<<sec<<endl;
		}
};
void time::input_time()
{
	cout<<"Enter hour minute second";
	cin>>hr>>min>>sec;
}
int main()
{
	time t1,t2;
	t1.input_time();
	t2.input_time();
	t1.diplay();
	t2.diplay();
}


