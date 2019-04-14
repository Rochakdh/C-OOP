#include <iostream>
using namespace std;
int main()
{
	int sal;
	cout << "Enter salary";
	cin >> sal;
	if (sal>=25000)
	{
		cout<<"Salary with Bonus is"<<sal+0.15*sal;
	}
	else if (sal>=15000 && sal<=25000)
	{
		cout<<"Salary with Bonus is"<<sal+0.10*sal;
	}
	else
	{
	cout<<"Salary with Bonus is"<<sal+0.5*sal;
	}
	return 0;
}

