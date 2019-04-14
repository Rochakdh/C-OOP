#include<iostream>
using namespace std;
template <class T>
class largest
{
	T a[5];
	public:
		largest(T b[5])
		{
			for(int i=0;i<5;i++)
			a[i]=b[i];
		}
		T check();	
};
template <class T>
 T largest<T>::check()
{
	T L=a[0];
	for(int i=0;i<5;i++)
	{
		if (a[i]>L)
		{
			L=a[i];
		}
	}
	return L;
}
int main()
{
	int c[]={1,2,3,4,5};
	largest <int> l1(c);
	cout<<l1.check/;();
	return 0;
	
}
