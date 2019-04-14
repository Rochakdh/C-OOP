#include<iostream>
using namespace std;
class complexx
{
	public:
	int real,imag;
		friend istream& operator <<(istream&, complexx&);
		friend ostream& operator >>(ostream&, complexx&); 
};
istream& operator >>(istream& is, complexx& c)
{
	complexx temp;
	is>>c.real>>c.imag;
	return is;
}
ostream& operator <<(ostream& os, complexx & c)
{
	os<<c.real<<"+i"<<c.imag;
	return os;
}
int main()
{
	complexx c1;
	cout<<"enter real and imag part";
	cin>>c1;
	cout<<"Entered vlue is";
	cout<<c1;
	return 0;
}


